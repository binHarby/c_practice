#include<stdio.h>

int main(void){
	FILE *fp;

	fp =fopen("file.txt","w+");
	fputs("This is Ab",fp);
	fseek(fp,7,SEEK_SET);
	//NOTICE this program will over write everything after the 7th position
	fputs(" (this is an inserted text) \n",fp);
	fclose(fp);
	return 0;
}
