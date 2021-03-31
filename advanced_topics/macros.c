#include<stdio.h>
#include<stdlib.h>

#define MACRO1 5
#define MACRO2 6
#define Integer int
#define square(x) ((x)*(x))
Integer main(void){
	printf("1st Macro is %d, 2nd Macro is %d\n", MACRO1,MACRO2);	
	printf("The square of 5 is %d\n",square(5));
	return 0;
}
