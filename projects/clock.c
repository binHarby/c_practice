#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void){
	int s=0,m=0,h=0;
	unsigned int d =1;
	while(1){
		system("clear");	
		s++;
		if(s==60){
			m++;
			s=0;
		}
		if(m==60){
			h++;
			m=0;
		}
		if(h>12){
			h=0;
		}
		printf("Clock %02d:%02d:%02d\n",h,m,s);
		sleep(d);

	}

	return 0;
}
