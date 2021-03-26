#include <stdio.h>

int main(void){
	int age;
	char agestring[10];
	printf("Enter your age: ");
	//this function will through a warning for being unsafe
	//it reads a line from the terminal, usually after a prompt 
	gets(agestring);
	//this function will through a warning too
	//atoi converts string to int
	age = atoi(agestring);
	if(age<18){
		printf("Hey Baby\n");
	} else {
		printf("Hello person\n");	
	}	
}
