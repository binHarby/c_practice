#include<stdio.h> //insert a header from another file
#define MAX 20 //define a macro
#undef MAX //undefines a macro
#define MAX 20 
#ifdef MAX   //returns true if this macro is defined
#define MIN 0
#endif
#ifndef what //returns true if this macro is undefined
#define what '?' //if used well through undeclared error
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
'##' to token pasting 
*/
#define message_for(a,b) \
printf(#a " Al" #b": Simply Easy Learning!\n")

int main(void){
	printf("Max= %d, Min= %d, error=%c\n",MAX,MIN,what);
	printf("__DATE__ = %s\n",__DATE__); // using the date macro
	printf("__TIME__ = %s\n",__TIME__); //using the time macro
	printf("__FILE__ = %s\n",__FILE__);//using the file macro
	printf("__LINE__ = %d\n",__LINE__); // using the line macro
	printf("__STDC__ = %d\n",__STDC__); //using the std macro, returns 1 when compiled with ANSI standard
	message_for(Abdulla,ameri);

	return 0;
}
