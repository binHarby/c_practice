#include<stdio.h>

void swap(int *pa,int *pb){
	printf("swap: a=%d, b=%d\n",*pa,*pb);
	int t = *pa;
	*pa=*pb;
	*pb=t;

	return;

}
int main(void){
	int a =17;
	int b =21;
	swap(&a,&b);	
	printf("swap: a=%d, b=%d\n",a,b);
	
}

