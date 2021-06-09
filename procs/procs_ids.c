#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){
	int id =fork(); // whats returned here is processes dependent
			//The child gets 0 ( which means the fork() was sucessful
			//The parent gets the ID of the child processes resulting from
			//the fork() function
	printf("fork returned: %d\n", id);
	if(id==0){
		printf("Child ID: %d, fork() returned: %d\n",getpid() ,id);
	}else {
		printf("Parent ID: %d, fork() returned: %d\n",getpid(),id);
		wait(NULL);
	}


	return 0;
}
