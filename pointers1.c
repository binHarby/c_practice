#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1=6,num2=9,num3=12;
	int *pnum1=&num1,*pnum2=&num2,*pnum3=&num3;
	
	printf("num1 value is %d, num1 address is %p\n",num1,&num1);
	printf("*pnum1 returns %d,pnum contents are %p, pnum address is %p\n",*pnum1,pnum1,&pnum1);
	
	//const pointer, where the pointed object is const (can't be changed by the pointer), however, the const pointer content (address to pointed object) can be changed


	const int *cpnum2=&num2;
	
	//here we are declaring a const pointer, where the pointer contents are consts(pointed object address)
	int *const icpnum2=&num2;
	//with cicp2 both the contents and the object pointed are const to the pointer
	const int *const cicp2=&num2;
	//changing the value of pointers through the pointed variable identifier
	
	num2++;

	printf("*cpnum2 is %d, cpnum2 content is %p, cpnum2 address is %p\n",*cpnum2,cpnum2,&cpnum2);
	cpnum2=&num3;

	printf("*cpnum2 is %d, cpnum2 content is %p, cpnum2 address is %p\n",*cpnum2,cpnum2,&cpnum2);
	*icpnum2=(int)*icpnum2+5;
	printf("*icpnum2 is %d, and num2 is %d\n",*icpnum2,num2);
	printf("*cicp2 is %d, and num2 is %d\n",*cicp2,num2);
	
	//void pointer assigned to an int object
	void *vp;
	vp=&num3;
	//changing a value of an void* variable/void pointer	
	*(int *)vp=16;
	printf("*(int *)vp is %d\n",*(int *)vp);
	//pointers to an array
	int arr[11];
	printf("new arr[0] is %d\n",arr[0]);
	int *parr;
	parr=arr; //similar to parr=&arr[0];
	arr[1]=2;
	printf("*(parr+1) is %d, arr[1] is %d, *parr is %d, arr[0] is %d\n",*(parr+1),arr[1],*parr,arr[0]);
	return 0;
}
