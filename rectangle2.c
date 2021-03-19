#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	double width = strtod(argv[1],NULL);
	double height =strtod(argv[2],NULL);
	double perimeter = 2*(width+height);
	double area = width*height;
	printf("Width is %.2f height is %.2f perimeter is %.3f area is %.3f\n", width, height, perimeter,area);

	return 0;


}
