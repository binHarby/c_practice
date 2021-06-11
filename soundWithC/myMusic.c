#include <stdio.h>
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

main(t){
	for(t=100000;;t++){
		char m = ((t*(t>>8*(t>>11)&(12|(t>>2)*10>>t|t>>10))));
		putchar(m);
		//for multi-bytes
		//printf("m: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",BYTE_TO_BINARY(m>>8), BYTE_TO_BINARY(m));	
		//having printf 
	
		fprintf(stderr,"Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(m));
	}

}
