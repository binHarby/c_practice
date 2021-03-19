#include <stdio.h>

enum month {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
//Or
enum week {sun=1,mon,tue,wed,thu,fri}w1;
int main(void){
	enum month m1;
	enum month m2;
	m1=jan;
	m2=dec;
	w1=sun;
	printf("m1 is %d, m2 is %d, w1 is %d\n", m1,m2,w1);
	
	return 0;
}
