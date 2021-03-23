#include<stdio.h>
#include<stdlib.h>

int sum(int arr[],int n){
	int sm=0,*arrEnd=arr+n;
	for(;arr<arrEnd;arr++){
		sm+=*arr;
	}

	return sm;
}
int main(void){
	int val[5]={5,2,3,5,6};
	printf("Sum of val values is %d\n",sum(val,5));
return 0;
}
