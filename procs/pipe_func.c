#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(int argc, char* argv[]){
	//send over data between proceses  with pipe
	int fd[2];
	//fd[0] -read
	//fd[1] -write
	if (pipe(fd)==-1)
		return 1;
	
	int id = fork();
	if(id==-1)	
		return 2;
	if(id ==0){
		close(fd[0]);
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		write(fd[1],&x,sizeof(int));
		printf("\n");
		close(fd[1]);
	} else{
		close(fd[1]);
		int y;
		read(fd[0],&y,sizeof(int));
		close(fd[0]);	
		wait(NULL);
		printf("Got data from child\n");
	
	}

	return 0;
}
