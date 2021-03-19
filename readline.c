#include <stdio.h>
#include <string.h>

const int STRLEN=5;

int readln1(char s[], int maxlen) {
	int len_s;
	fgets(s,maxlen,stdin);
	len_s = strlen(s);
	
	if(s[len_s-1]=='\n'){
		s[len_s-1]='\0';
		len_s -=1;
	}
	fflush(stdin);
	return len_s;

}
//this function is better, because it works on any platform
//since tcfluch and fflush doesn't work on all systems
int readln(char s[],int maxlen){
	char ch;
	int i=0,chars_remain=1;
	while(chars_remain) {
		ch = getchar();
		if((ch=='\n')|| (ch==EOF)){
			chars_remain=0;
		} else if(i<maxlen -1){
			s[i++] = ch;
			
		}
	}
	s[i] = '\0';
	return i;

}
int main(void){
	int size=10;
	char fr[size];
	printf("Enter an input line: \n");
	readln(fr,size);
	
	printf("the line of size %d was '%s'\n",size,fr);
	return 0;

}
