#include <stdio.h>

int main(void){
	double width = 3.5;
	double height =5.5;
	double perimeter = 2*(width+height);
	double area = width*height;
	printf("Width is %.2f height is %.2f perimeter is %.3f area is %.3f\n", width, height, perimeter,area);

	return 0;


}
