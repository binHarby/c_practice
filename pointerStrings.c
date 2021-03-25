#include<stdio.h>

//objective copy one string to an empty variable
void copyString2(char *str1,char *str2){
	while(*str1){ //'\0' evaluates as a 0, meaning false
		*str2++=*str1++;
	}	
	//this step is IMPORTANT
	//need to terminate the array after assigning
	//all the elements to it
	*str2='\0';

}
void copyString(char *str1,char *str2){
	for(;*str1!='\0';str1++,str2++){
		*str2=*str1;

	}
	//this step is IMPORTANT
	//need to terminate the array after assigning
	//all the elements to it
	*str2='\0';

}

int main(void){
	char string1[]="This is a string ";
	char string2[100];
	char string3[]="This happened with the while loop, it was less code\nBut if not done right, its no good";
	copyString(string1,string2);
	printf("String 2 is %s\n",string2);
	copyString2(string3,string2);
	printf("String 2 is %s\n",string2);


	return 0;
}
