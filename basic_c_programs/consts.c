#include <stdio.h>

int main(void){
	//this is a True const, value can't be re-defined, and it lives in ROM read-only memory 
	const double DOUBLE_VALUE=1.222;
	printf("your const double value is %.3f\n",DOUBLE_VALUE);
	return 0;
}
