#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>


int main (int argc, char* argv[]){
	//when an execution command is called
	//it  takes over an entire processes
	//and acts like a 'return' statment
	int pid = fork();
	if(pid==-1) return 1;
	if(pid==0){
		//YOU ARE EXECUTING PROGRAMS, EXECUTIVE PROGRAMS, BASH IS NOT AN
	//INTERPETER HERE
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
