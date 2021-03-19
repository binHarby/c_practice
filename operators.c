#include <stdio.h>

int main(int argc, char **argv){

	int val= strtol(argv[1],NULL,0);
	printf("Val read is %d\n", val);	
	int val2=++val;
	printf("Val after prefix increment  %d, val2 after val2=++val is %d\n", val,val2);	
	val2=val++;
	printf("Val after post-fix increment  %d, val2 after val2=val++ is %d\n", val,val2);	
	int *a=&val;
	int *b=&val2;
	printf("a is %d, b is %d\n", *a,*b);		
	
	*b+=*a+3;
	*b/=2;
	*a-=2;
	*a*=2;
	printf("a is %d, b is %d, val is %d,val2 is %d\n",*a,*b,val,val2);
		if(*a==val &&*b==val2){
			printf("a and b are both pointers to val and val2 respectivly\n");
		}
		if((*a==val)||(*b==val2)){
			printf("either a or b are pointers to either val or val2\n");
		}
	return 0;
	

}
