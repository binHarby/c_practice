#include<stdio.h>


int main(void){
	FILE *fp;
	int ch;
	
	fp=fopen("file.txt","w+");
	
	for(ch=33;ch<=100;ch++){

		fputc(ch,fp);
	}
	fputc('\n',fp);
	fclose(fp);

	return 0;


}
