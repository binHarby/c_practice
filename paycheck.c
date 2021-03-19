#include <stdio.h>
#include <stdlib.h>
/*
this program calculates weekly pay

basic pay is 12.00$ per hour
overtime is after 40 hours, where the pay is 1.5 basic pay
tax rate is : 0.15 for first 300$, 0.2 for next 150, and .25 for anything more

*/

int main(int argc, char **argv){
	double hours=strtod(argv[1],&argv[1]);
	double bp=12;
	double grossp=(hours>40)? (40*bp)+((hours-40)*18):(hours*bp);
	double netpay;
	printf("gross pay is %f\n",grossp);
	if(hours<25){
		netpay= grossp;	
	}else if(hours>=25&&hours<37.5){
		netpay=grossp-(300*0.15)-((grossp-300)*0.20);
	}else {
		
		netpay=grossp-(300*0.15)-((grossp-300)*0.20)-((grossp-450)*0.25);
	}
	printf("Net pay is %f\n", netpay);
	printf("Taxes paid %f\n",grossp-netpay);
	return 0;
}
