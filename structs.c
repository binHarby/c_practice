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

}abdulla;

int main(void){

	struct date aday={11,11,1911};
	struct date day2={.day=5,.year=500,.month=10};
	abdulla=(struct data){{'N','i','c','e'},25,1090};
	abdulla=(struct data){.name={'N','i','c','e'},.id=0,.age=0};
	printf("aday %d/%d/%d\nday2 %d/%d/%d\n",aday.day,aday.month,aday.year,day2.day,day2.month,day2.year);
	printf("%s data age=%d,id=%d\n",abdulla.name,abdulla.age,abdulla.id);
	return 0;

}
