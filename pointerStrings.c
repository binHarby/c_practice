#include<stdio.h>
#include<string.h>

int main(void){
	char multi[]="My String";

	char *p=multi;

	for(int i=0;i<strnlen(multi,sizeof(multi));i++){


	printf("multi[%d]=%c *(p+%d)=%c &multi[%d]=%p p+%d=%p\n",i,multi[i],i,*(p+i),i,&multi[i],i,p+i);
	}
	return 0;





}
