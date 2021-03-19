#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	time_t t;
	srand((unsigned) time(&t));
	const int rightg = rand()%21;
	int guess,tries=5;
	while(tries>0){
		printf("guess number from 0 to 20: ");
		scanf("%d",&guess);
		if(guess==rightg){
			printf("Right!\n");
			break;	
		}else if(guess>rightg){
			printf("Too High,Try again :(\n");
		}else {

			printf("Too Low,Try again :(\n");
		}
		tries--;
	}		
	return 0;

}
