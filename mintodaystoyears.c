#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	double minutes = strtod(argv[1],&argv[1]);
	double days = minutes/(60*24);
	double years= days/365.25;
	printf("Minutes %f, Days %f, Years %f \n",minutes,days,years);

	return 0;
}
