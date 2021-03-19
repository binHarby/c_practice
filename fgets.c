#include <stdio.h>

int main(void){
	//this program may not get expected results
	/* reason is because the input_buffer=var_buffer
		and by var_buffer I mean the var given to the 
		fgets as 1st argument, if a value overflows the buffer
		then, the chars(since gets and fgets only output chars) stay at the input 
		buffer, and need to be fflush(stdin) or tcflush();


		see fgets2.c for an implementation
	*/

	char first[3];
	char last[3];
	printf("Enter your first name: ");
	fgets(first,3,stdin);
	printf("Enter your last name: ");
	fgets(last,3,stdin);
	printf("Hello %s,%s\n", first,last);
	
	return 0;

}
