#include<stdio.h>
//NOTE bool size is 1 byte,thus the use of int here is not efficent
//since int is 4 bytes
//ALWAYS pass pointers as arguments to struct related functions 
//and use const for security 
struct date {
	int day;
	int month;
	int year;

};
struct data{
	char name[7];
	int age;
	int id;

};
int sameDay(struct date *const pdate1,struct date *const pdate2){
	if(pdate1->day==pdate2->day){

		return 1;
	}else{

	return 0;
	}
	return -1;

}

int main(void){
	struct date myDate,*pmyDate;
	struct date Date2={3,12,1999};
	pmyDate=&myDate;
	pmyDate->day=11;//this is similar to (*pmyDate).day=11;
	pmyDate->month=10;//this is similar to (*pmyDate).month=10;
	pmyDate->year=1904;//this is similar to (*pmyDate).year=1904;
	(*pmyDate).day=3;
	int equal=sameDay(&myDate,&Date2);//NOTE: this is similar to sameDay(myDate,Date2); since both point to the first member address like an array
	printf("*pmyDate %d/%d/%d\n", pmyDate->day,pmyDate->month,pmyDate->year);	
	if(equal){

		printf("Days are equal\n");
	}else if(equal ==0){
		
		printf("Days are not equal\n");
	}else {
		
		printf("There was an error");
	}
	return 0;

}
