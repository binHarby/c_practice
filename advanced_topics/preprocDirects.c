#include<stdio.h> //insert a header from another file
#define MAX 20 //define a macro
#undef MAX //undefines a macro
#define MAX 20 
#ifdef MAX   //returns true if this macro is defined
#define MIN 0
#endif
#ifndef MAX //returns true if this macro is undefined
#define what ? //if used well through undeclared error
#endif
//#if //test if a compile test is true
//#else //alternative to #if
//#elif //both #else and #if
//#endif //ends preprocessor conditional 
//#error // prints error message on stderr
//#pragma // 'issues special commands to the compiler, using a standardized method 
/* some predefined Macros are: __DATE__,__TIME__,__FILE__,__LINE__,__STDC__
check the print statements below for meaning these macros */

/* preprocessor operators: '\' to continue a macro 
'#' to stringize 
'##' to toaken pasting 
*/
int main(void){
	printf("Max= %d, Min= %d, error=%d\n",MAX,MIN);

	return 0;
}
