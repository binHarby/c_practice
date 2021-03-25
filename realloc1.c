#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){

	char *str =NULL;
	/*memory allocation with 
		with malloc*/
	str=(char *)malloc(15*sizeof(char));
	strcpy(str,"jason");
	printf("String is %s, Address = %p\n",str,str);
	/*reallocate memory with realloc()*/
	str=(char *)realloc(str,25*sizeof(char));
	strcat(str,".ae");
	
	printf("String is %s, Address = %p\n",str,str);
	free(str);
	//small chunks vs big chunks of memory allocation can
	//have "memory management overhead", try to keep it as big as needed
	//only hang to memory as long as you need it
	//free memory when not used
	
	return 0;
	



}
