#include<stdio.h>
#include<stdlib.h>
typedef int my_int;
typedef int arr[5];
typedef struct yes{
	int numberOfV;


}car; // notice this will act as the new name for the typedef struct
//OR
struct date {

	int day;

};
//now define
typedef struct date date_type;
typedef struct date * date_ptr;
int main(void){
	my_int t =5;
	arr anArray={5,4,3,2,1};
	car naz_car;
	date_type someDate;
	someDate.day=11;

	date_ptr someDatePtr;
	someDatePtr=(date_ptr)malloc(sizeof(date_type));
	someDatePtr=&someDate;
	someDatePtr->day=15;		
	naz_car.numberOfV=8;
	printf("t=%d\n",t);	
	printf("The Array Elements:\n");
	for(int i=0;i<5;i++){
		printf("Array[%d]=%d\n",i,anArray[i]);

	}
	printf("The Naz Car has %d cylinders \nsomeDate.day=%d\n",naz_car.numberOfV,someDate.day);

	return 0;
}
