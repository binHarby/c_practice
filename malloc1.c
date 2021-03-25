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
	
	return 0;
	



}
