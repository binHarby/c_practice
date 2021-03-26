#include<stdio.h>

int main(void){
	FILE *fp;
	fpos_t position;

	fp=fopen("file.txt","w+");
	int poo=fgetpos(fp,&position);
	printf("current position is %d\n",poo);
	fputs("This is going to overwrite previous content\n",fp);
	return 0;
}
