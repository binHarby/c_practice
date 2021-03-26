#include <stdio.h>

int main (int argc, char **argv){
	int i;
	for(i=0;i<argc;i++){
		//d is a int specifer mostly, for floating points yous f
		//ex of %f : %.2f or %2.2f . these values specfiy the number of digits 
		//after and before the floating point
		//you can also use %s for strings, strings are char arrays in c
		/*
			this is a multiline comment
			%c is a char specifiers
		*/
		printf("Hello, World! argc %d, arg %d is %s\n",argc, i,argv[i]);
		
	}
	return 0;

}
