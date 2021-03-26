#include <stdio.h>
#define var 'C'
#define BETTER_VAR_NAME 'C'
int main(void){
	//notice that hash defines are handled by the preprocessor
	//and the can be re-defined
	//meaning they're not true constants
	#define var 6
	printf("var is %d\n",var);
	//this program will result in warnings by the compiler, but it will still work
	return 0;
}
