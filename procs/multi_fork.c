#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char** argv){
	int id1=fork();
	int id2=fork();
	int id3=fork();
	if(id1!=0){
		if(id2!=0){
			if(id3!=0){
					
				printf("original parent- ID: %d\n",getpid());	
			}else{
				
				printf("4th child- ID: %d\n",getpid());	
			
			}

		}else {
			if(id3!=0){
					
				printf("2nd child- ID: %d\n",getpid());	
			}else{
				
				printf("6th child- ID: %d\n",getpid());	
			
			}
		
		}
	}else {
		if(id2!=0){
			if(id3!=0){
					
				printf("1st child- ID: %d\n",getpid());	
			}else{
				
				printf("5th child- ID: %d\n",getpid());	
			
			}

		}else {
			if(id3!=0){
					
				printf("3rd child- ID: %d\n",getpid());	
			}else{
				
				printf("7th child - ID: %d\n",getpid());	
			
			}
			
		
		}

	}
//this is who you wait for processes, but this may miss-up or pid order
//	while(wait(NULL) !=-1 || errno!=ECHILD){

//		printf("Waited for a child!\n");
//	}

	return 0;
}
