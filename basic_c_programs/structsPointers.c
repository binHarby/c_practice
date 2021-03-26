#include<stdio.h>
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

int main(void){
	struct date myDate,*pmyDate;
	pmyDate=&myDate;
	pmyDate->day=11;//this is similar to (*pmyDate).day=11;
	pmyDate->month=10;//this is similar to (*pmyDate).month=10;
	pmyDate->year=1904;//this is similar to (*pmyDate).year=1904;
	(*pmyDate).day=3;
	
	printf("*pmyDate %d/%d/%d\n", pmyDate->day,pmyDate->month,pmyDate->year);	
	return 0;

}
