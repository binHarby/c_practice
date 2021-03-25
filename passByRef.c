#include<stdio.h>
#include<stdlib.h>
void square(int *num){
	*num*=*num;

}

int main(void){
	//hard coded| already defined pointer 
	int num=9;
	//pointer with allocated memory 
	int *somep=(int*)malloc(sizeof(int));
	printf("*somep =%d\n",*somep);	
		//defining the pointer value
	*somep=6;	
	printf("*somep =%d\n",*somep);	
	square(somep);	
	printf("after squaring *somep =%d\n",*somep);	
	printf("num =%d\n",num);	
	square(&num);
	printf("num =%d\n",num);	
	return 0;
	

}
