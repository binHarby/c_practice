#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>


int main (int argc, char* argv[]){
	execlp("ls","ls","-ahl",NULL,NULL,NULL);
	printf("Success!\n");	


	return 0;
}
