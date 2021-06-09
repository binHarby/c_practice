#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
	int id = fork();
	char *com1="ls";
	char *com2="cal";
	char *wat[3];
	wat[1]="-h";
	wat[2]=NULL;
	if(id==0){
		wat[0]="ls";
		execvp(com1,wat);	
	}else{
			
		wat[0]="cal";
		wat[1]="-j";
		execvp(com2,wat);	
		wait(NULL);
	}
	return 0;
}
