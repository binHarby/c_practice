#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>
#include <fcntl.h> 

int main (int argc, char* argv[]){
	//when an execution command is called
	//it  takes over an entire processes
	//and acts like a 'return' statment, meaning it lasts all through the child life
	int pid = fork();
	if(pid==-1) return 1;
	if(pid==0){

		int file =open("openFunc-fcntl.txt",O_WRONLY | O_CREAT, 0777);
		if(file ==-1) return 2;
		//O_WRONLY means write only, by Or ing it with O_CREAT flag 
		//we are saying if doesn't exit, create it
		//the 0777 sets the permissions for the users: i.e root self others ?
		/* file discriptors: a number uniqe across a process
		 * they represent IO resources
		 * fd =	0 is STDIN
		 * fd = 1 is STDOUT
		 * fd = 2 is STDERR
		 * other  FDs get an incremented number starting from 2 
		 *
		 *
		 */
		
		//you can have two FDs pointing to the same file
		int file2=dup(file); //we are copying/duplicating an FD
		printf("The FD of openFunc: %d\nThe 2nd FD of openFunc: %d\n",file,file2);
		//hint: STDOUT_FILENO is 1, in most systems

		int file3=dup2(file,STDOUT_FILENO);// this will replace FD 1 with FD 3 (or the value of file)
		printf("The duplicated FD: %d\n",file3);
		//closing the pingR 2 FDs, only FD 1 remains, which saves to openFunc-fcntl.txt
		close(file);
		close(file2);

		//TIP(try first) : you can copy FD 1 (i.e STDOUT) to an FD an then replace it
		if(execlp("ping","ping","-c","1","google.com",NULL)==-1){
			printf("failure running!\n");	
			return 2;
		}
	}else {
		//wait status reference variable ws
		int ws;
		wait(&ws); //have to pass it to keep track of the program execution
		if(WIFEXITED(ws)){
			int statusOfCode = WEXITSTATUS(ws);
			if (statusOfCode==0){
				printf("Sucesses!\n");
			}
			else {
				printf("Fail :(, status code: %d \n",statusOfCode);
			}
		}

	}

	return 0;
}
