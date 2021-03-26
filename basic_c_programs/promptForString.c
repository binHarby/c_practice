#include <stdio.h>
#include <stdlib.h>

int main(void){
	int strlength;
	//you can also declare string here and initialize it to NULL
	//remember; you can't use a pointer in before initializing it
	printf("Enter string limit:");
	scanf("%d",&strlength);
	char *strr=(char *)malloc(strlength*sizeof(char));

	//IMPORTANT: check if malloc returned null
	if(strr!=NULL){
		printf("Enter string:");
		scanf(" ");
		gets(strr);
		printf("Your string was: %s\nYour String limit was: %d\n",strr,strlength);

	
	}else {
		printf("malloc returned null\n");
	}	
	//IMPORTANT: free space after using it
	free(strr);
	
	return 0;
}
