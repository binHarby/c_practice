#include<stdio.h>
struct date {
	int day;
	int month;
	int year;
	//notice we had to declare it as ti to define its elements
	//notice also it is only in this scope, we could define it
	/* outside this scope, but we would have to declare it with some name
	to assign values to its elements*/
	struct time{
		int sec;
		int min;
		int hour;
	}ti;

};
struct data{
	char name[7];
	int age;
	int id;
	struct healt{
		char status;

	}hprofile;

}abdulla;

int main(void){

	struct date aday={11,11,1911,{30,30,12}};
	struct date day2={.day=5,.year=500,.month=10};
	abdulla=(struct data){{'N','i','c','e'},25,1090,{'S'}};
	abdulla=(struct data){.name={'N','i','c','e'},.id=0,.age=0};
	printf("aday %d/%d/%d ti: %d:%d:%d\nday2 %d/%d/%d\n",aday.day,aday.month,aday.year,aday.ti.sec,aday.ti.min,aday.ti.hour,day2.day,day2.month,day2.year);
	printf("%s data age=%d,id=%d status=%c\n",abdulla.name,abdulla.age,abdulla.id,abdulla.hprofile.status);
	return 0;

}
