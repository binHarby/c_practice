#include<stdio.h>

int main(void){
	float l,w;
	printf("Enter length of rec: ");
	scanf("%f",&l);
	printf("Enter width of rec: ");
	scanf("%f",&w);
	printf("w=%f,l=%f\n",w,l);
	float res=l*w;
	printf("Area is %f %f\n",(float)(l*w),res);	
	return 0;
}
