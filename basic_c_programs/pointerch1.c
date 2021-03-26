#include<stdio.h>


int main(void){
	//create a pointer of type int
	int *p;
	//initialize *p pointer with null
	p=NULL;
	//make int var
	int var =9;
	//point to var
	p=&var;
	printf("Address of var=%p\nAddress of pointer=%p\nValue of pointer=%p\nValue pointed to= %d\n",&var,&p,p,*p);


	return 0;



}
