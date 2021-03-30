#include<stdio.h>
#include<stdlib.h>
typedef int my_int;
typedef int arr[5];
typedef struct yes{
	int numberOfV;


}car; // notice this will act as the new name for the typedef struct
int main(void){
	my_int t =5;
	arr anArray={5,4,3,2,1};
	car naz_car;
	naz_car.numberOfV=8;
	printf("t=%d\n",t);	
	printf("The Array Elements:\n");
	for(int i=0;i<5;i++){
		printf("Array[%d]=%d\n",i,anArray[i]);

	}
	printf("The Naz Car has %d cylinders \n",naz_car.numberOfV);

	return 0;
}
