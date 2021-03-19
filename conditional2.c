#include <stdio.h>

int main(int argc, char **argv){
	//using ascii equivlent
	//int age=*argv[1]-'0';
	//using using strtol
	int age = strtol(argv[1],NULL,10);
	printf("age read is %d\n",age,age);
	if(age<=10)
	printf("Hey baby\n");
	else if(age>10 && age<18)
	printf("Hey big baby\n");
	else if(age>18 &&age<21){
		printf("Hey youngman \n");
	}
	else
	printf("Hey \n");
	
	// this is a ternary operator 
	age==50? printf("Hey look whos 50!\n"): printf("\n");

	return 0;

}
