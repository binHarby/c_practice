#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int arr[] ={1,2,3,4,5};
	int n=5;
	
	int i;
	for(i=0; i<n;++i){
		printf("%d ", arr[i]);

	}
	i =0;
	printf("\n");
	while(i<n){
		printf("%d ",arr[i++]);
	}
	printf("\n");


}
