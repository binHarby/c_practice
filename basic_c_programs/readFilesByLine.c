#include<stdio.h>
#include<stdlib.h>
//this program uses fgets function, where each line is read in a buffer

int main(void){
	FILE *fp;
	char str[61]; //extra 1 for "line feed"|'\n'
	fp=fopen("someTextFile.txt","r");
	
	if(fp==NULL) {
		perror("Error in opening file");
		return(-1);
	}
	//read a single Line
	while((fgets(str,60,fp))!=NULL){//NOTICE, we pass the str array pointer, specify length and input buffer, which in this case is the file pointer contents
		printf("%s",str);
	
	}
	fclose(fp);
	fp=NULL;
	
		//system("pause"); can make the program pause
	//system("ls"); //notice system("") can be used to run bash commands from c
	return 0;
}
