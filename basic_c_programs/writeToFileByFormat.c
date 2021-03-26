#include<stdio.h>
#include<stdlib.h>//needed for fprintf

int main(void){
	FILE *fp;
	
	fp=fopen("file.txt","w+");
	//fprintf doesn't terminate a writing string to afile
	//thus, if you want to read again through a c program make sure to add the null character like so, you can't add it through a string (literal or otherwise) 
	fprintf(fp,"%s %s %s %s %d\n","Hello","my","number","is",555);	
	fclose(fp);

	return 0;


}
