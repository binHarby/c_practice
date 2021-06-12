#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	// 5=> 5 *4 = 20
	int p1[2];
	
	if (pipe(p1) ==-1) return 1;
	
	int pid = fork();
	if (pid ==0) {
		int x;
		if(read(p1[0],&x,sizeof(x))==-1)return 2;

		printf("Received %d\n",x);

		x*=4;

		if(write(p1[1],&x,sizeof(x))==-1) return 4;
		printf("Wrote %d\n",x);
	}else {
		//parent
		
		srand(time(NULL));
		int y = rand() %10;
		if(write(p1[1],&y,sizeof(y))==-1) return 5;
		printf("Wrote y %d\n",y);
		if(read(p1[0],&y,sizeof(y))==-1) return 6;


		printf("Result in y: %d\n",y);
	}
	close(p1[0]);
	close(p1[1]);


	return 0;
}
