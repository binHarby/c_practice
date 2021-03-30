#include<stdio.h>
#include<stdlib.h>
typedef int my_int;
typedef int arr[5];
int main(void){
	my_int t =5;
	arr anArray={5,4,3,2,1};
	printf("t=%d\n",t);	
	printf("The Array Elements:\n");
	for(int i=0;i<5;i++){
		printf("Array[%d]=%d\n",i,anArray[i]);

	}

	return 0;
}
