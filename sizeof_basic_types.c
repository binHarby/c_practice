#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	printf("Int size is %zd bytes\nChar size is %zd bytes\nDouble size is %zd bytes\nShort size is %zd bytes\nLong size is %zd bytes\nLong long size is %zd bytes\nLong double size is %zd bytes\n", sizeof(int),sizeof(char),sizeof(double),sizeof(short),sizeof(long),sizeof(long long),sizeof(long double));

}
