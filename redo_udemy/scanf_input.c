#include<stdio.h>

int main(void){
	char str[100];
	int i;
	printf("Enter a string:");
	scanf("%s",str);
	printf("Enter a number:");
	scanf("%d",&i);
	
	printf("you entered this String: %s\nAnd this number=%d\n",str,i);
	return 0;
}
