#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<sys/wait.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char* argv[]){
	int arr[]={1,2,3,4,5,6};
	int arrSize = sizeof(arr) / sizeof(int);
	int start,end;
	int fd[2];
	if(pipe(fd)==-1){
		return -1;

	}
	int id = fork();
	
	if(id==-1){
		return 1;

	}
	if(id ==0){
		start=0;
		end=start + arrSize /2;
	} else {
		start = arrSize /2;
		end= arrSize;

	}
	int i, sum=0;
	for (i=start;i<end;i++){
		sum += arr[i];

	}
	printf("Partial sum: %d\n",sum);
	if (id ==0){
		close(fd[0]);
		write(fd[1],&sum,sizeof(sum));
		close(fd[1]);	
	} else{
		int sumFromChild;
		close(fd[1]);
		read(fd[0],&sumFromChild,sizeof(sumFromChild));
		close(fd[0]);
		
		int totalSum = sum + sumFromChild;
		printf("Total sum is %d\n", totalSum);
		wait(NULL);
	
	}


	return 0;
}
