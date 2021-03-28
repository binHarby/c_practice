#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a=5;
	a=(a++) + (a++) + (a++); //5 ->6->7
	printf("a is %d\n",a);

	return 0;
}
