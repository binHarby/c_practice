//This part of challenge to calculate the number of chars in a string

#include<stdio.h>
#include<string.h>
int  strlength(const char *ptr){
	const char *i=ptr;
	while(*i){
		//*i++ this is equvilant to i++ here
		*i++;		
	}
	return i-ptr;

}
int main(void){
	char lstr[]="This is a long string";
	printf("The string length is %d\n",strlength(lstr));
	printf("with strlen =%d\n",strlen(lstr));

	printf("The 2nd string length is %d\n",strlength("My name is Abdulla Alameri and I know c"));

	return 0;
}
