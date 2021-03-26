#include<stdio.h>


int main(void){
	FILE *fp;
	
	fp=fopen("file.txt","w+");
	fputs("This is c programming",fp);
	fputc('\0',fp);//fputs doesn't terminate a writing string to afile
	//thus, if you want to read again through a c program make sure to add the null character like so, you can't add it through a string (literal or otherwise)
	fputs("\nThis is a systems  programming languague",fp);
	fputc('\0',fp);
		
	
	fputc('\n',fp);
	fclose(fp);

	return 0;


}
