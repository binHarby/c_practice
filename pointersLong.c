#include<stdio.h>

int main(void){
	long multi[]={10L,15L,21L,33L,37L};
	long *pm=multi;
	for(int i=0;i<sizeof(multi)/sizeof(multi[0]);i++){
		printf("multi[%d] = %d\n",i,multi[i]);
		printf("p+%d,&multi[%d]: %llu\t\t *(p+%d)=%d\n",i,i,(unsigned long long)pm+i,i,*(pm+i));
	}
	
	printf("size of a long is %d bytes\n",(int)sizeof(long));


	return 0;
}
