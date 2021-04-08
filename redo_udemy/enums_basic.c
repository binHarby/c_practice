#include<stdio.h>
enum month {Jan, Feb,Mar,April=10,May};
int main(void){	
	enum month m1=Jan;
	enum month m2= April;
	enum month m3 = May;
	printf("Jan is %d\nApril Value is %d\nMay value is %d\n",m1,m2,m3);	
	return 0;
}
