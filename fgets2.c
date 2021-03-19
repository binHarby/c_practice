#include <stdio.h>

//my own flushing input routine
int flush_in(void){
	//NOTE
	//any char assigned to an int in c 
	//gets translated to its ASCII eqevilant 
	int ch;
	while((ch=getchar()) !='\n' && ch !=EOF);

}
int main(void){
	//this program may not get expected results
	/* reason is because the input_buffer=var_buffer
		and by var_buffer I mean the var given to the 
		fgets as 1st argument, if a value overflows the buffer
		then, the chars(since gets and fgets only output chars) stay at the input 
		buffer, and need to be fflush(stdin) or tcflush();
		
		fflush() and tcflush will be covered later
		see implementation in flush_in function
	*/
	//this program also can't handle lower then expected letter count

	char first[3];
	char last[3];
	printf("Enter your first name: ");
	fgets(first,3,stdin);
	flush_in();
	printf("Enter your last name: ");
	fgets(last,3,stdin);
	flush_in();
	printf("Hello %s,%s\n", first,last);
	
	return 0;

}
