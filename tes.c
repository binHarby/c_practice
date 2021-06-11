#include<stdio.h>
#include<stdlib.h>

int main(){
	char* g= "This\0Is\0A\0Word";
	printf("%x\n",&g);
	printf(g+g[6]);
	printf(g);

	return 0;
}
