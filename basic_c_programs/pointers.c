#include<stdio.h>

int main(void){
	//val is an int object with value 10
	//*ptr 'points' to val
	/* 'points' is an action saved to any variable that starts with *
	where the *variable stores only an address to variable
	and when a *variable is called, it takes the contents of var
	and gets the object  cooresponding to the address stated in var
	*/
	//& operator only returns an address to point to 

	int val=10,*ptr=&val,*ptr2,*ptr3=&(*ptr),ptr4=&ptr;
	//const void * valueOfAddress10=(const void *)0xA;	
	int * ptr5=&val;
	printf("val is %d\nval address is %d\n*ptr is %d\nptr is %d\nptr address is %d\n",val,&val,*ptr,ptr,&ptr);
	printf("ptr4 (holds the address to ptr) is %d\nptr3 (holds the address to val) is %d\n",ptr4,ptr3);
	//lets try to print the address at memory address '10', which is the value stored in val
	//variable is auto declared when you use a *variable
	//how ever *variable is not auto declared when you declare variable
	printf("* ptr5 is %d\n",* ptr5);
	
	return 0;

}
