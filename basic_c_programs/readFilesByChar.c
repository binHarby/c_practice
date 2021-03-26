#include<stdio.h>
#include<stdlib.h>
//this program uses fgetc function, where each char is read 

int main(void){
	FILE *fp;
	int c;
	fp=fopen("someTextFile.txt","r");
	
	if(fp==NULL) {
		perror("Error in opening file");
		return(-1);
	}
	//read a single char
	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
	
	}
	fclose(fp);
	fp=NULL;
	
		//system("pause"); can make the program pause
	system("ls"); //notice system("") can be used to run bash commands from c
	return 0;
}
