#include <stdio.h>

int main(void){
	char first[3];
	char last[3];
	printf("Enter your first name: ");
	gets(first);
	printf("Enter your last name: ");
	gets(last);
	printf("Hello %s, %s\n",first,last);
		
	return 0;	
}
