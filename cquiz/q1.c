#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a=10,b=25;
	a = b++ + a++;
	//
	printf("first op: a=%d,b=%d\n",a,b);
	b= ++b + ++a;
	printf("%d %d\n",a,b);

	return 0;
}
