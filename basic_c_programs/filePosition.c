#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	int len;
	fp=fopen("someTextFile.txt","r");
	
	if(fp==NULL) {
		perror("Error in opening file");
		return(-1);
	}
	fseek(fp,0,SEEK_END);//fseek here changes the file position to the end
	len=ftell(fp);
	
	fclose(fp);
	fp=NULL;
	printf("Total Size Of the file.txt =%d bytes\n",len);

	
	return 0;
}
