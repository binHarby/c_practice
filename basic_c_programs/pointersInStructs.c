#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pdata {
	int *pAge;
	int *pId;

};
struct data{
	char *name;
	int age;
	int id;

};

int main(void){
	struct data employ1,*pemploy1;
	struct pdata empPtr1;	
	pemploy1=&employ1;
	pemploy1->name =(char *)malloc(12+1);//NOTE: 12 is the size of 'can you see?' and 1 is for the null char '\0'
	//can't free name pointer through struct pointer with the below statment after 'pemploy->name="string", not sure why
	//reason is because string literals have static storage *read bookmarked stackoverflow
	strcpy(pemploy1->name,"can you see");
	printf("employee 1 name=%s\tage=%d\tid=%d\n",employ1.name,employ1.age,employ1.id);	
	if(employ1.name!=NULL){
		empPtr1.pId=&employ1.id;
		/* when initializing some members with ex:
			employ1=(struct data){.age=3,.id=99};
			the pre-defined value of name disappear 	

		*/
		employ1.age=10;
		employ1.id=600;
		*empPtr1.pId=0;
		printf("employee 1 name=%s\tage=%d\tid=%d\n",employ1.name,employ1.age,employ1.id);	
		

	}
	free(pemploy1->name);

	return 0;

}
