#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void handle_sigcont(int sig){
	printf("\nInput number: ");
	fflush(stdout);

}

int main(int argc, char** argv){
	struct sigaction sa;
	sa.sa_handler=&handle_sigcont;
	sa.sa_flags = SA_RESTART; // " because it doesn't work well with scanf"
	//figure out why we need line 14
	sigaction(SIGCONT,&sa,NULL); //sigaction is more compatiable then signal
	//NOTE**:figure out what the third paramater is about
	//signal(SIGCONT,&handle_sigtstp); //this can work, not recommended for compatiblity reasons	READ MAN PAGE
	int x;
	printf("Input number: ");
	scanf("%d",&x);
	printf("Result %d * 5 = %d\n",x,x*5);


	return 0;
}
