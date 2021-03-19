#include <stdio.h>

int main(void){
	char str[3];
	int i;
	printf("Enter a string of size 3 then an int: ");
	scanf("%s %d", str,&i);
	printf("\nYou Entered: %s,%d\n",str,i);
	return 0;


}
