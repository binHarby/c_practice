#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<unistd.h>
#include<time.h>

int main(int argc, char* argv[]){
	int id = fork();
	int n;
	if(id ==0){
		n = 1;
	
		printf("child PID: %d, fork returned: %d \n",getpid(),id);
	}else{
		n = 6;
		printf("parent PID: %d, fork returned: %d\n",getpid(),id);
	}
	int i;
	if(id !=0){
		wait();
	}
	for (i=n;i<n+5;i++){
		printf("%d ",i);
		fflush(stdout);
	}
	printf("\n");
	return 0;
}
