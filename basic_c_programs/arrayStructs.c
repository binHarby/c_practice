#include<stdio.h>
struct date {
	int day;
	int month;
	int year;

};
struct data{
	int age;
	int id;

}abdulla;

int main(void){

	struct date aday={11,11,1911};
	struct date day2={.day=5,.year=500,.month=10};
	abdulla=(struct data){25,1090};
	abdulla=(struct data){.id=0,.age=0};
	printf("aday %d/%d/%d\nday2 %d/%d/%d\n",aday.day,aday.month,aday.year,day2.day,day2.month,day2.year);
	printf("data age=%d,id=%d\n",abdulla.age,abdulla.id);
	struct date myDate[5]={[1]={21,9,1990}};
	myDate[1].month=2;
	printf("myDate[1] %d/%d/%d\n",myDate[1].day,myDate[1].month,myDate[1].year);
	struct date randDate[5]={{3,3,19},{11,9,1970},{1,1,1996}};
	printf("randDate[1] %d/%d/%d\n",randDate[1].day,randDate[1].month,randDate[1].year);
	
	return 0;

}
