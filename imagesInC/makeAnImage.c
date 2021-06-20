/** This program needs file named 'file.txt' with bits of a jepg image to convert it to back to jepg **//
#include <stdio.h>
int main (){

FILE* pInput = fopen("file.txt", "r"); 
FILE* pOutput = fopen("output.JPG","wb");

unsigned char index = 0, byte = 0;
char line[32]; // Arbitrary, few characters should be enough
while (fgets(line, sizeof(line), pInput))
{
    if (line[0] == '1')
        byte = (unsigned char)(byte | (1 << index));

    if (++index == 8)
    {
        fwrite(&byte, 1, 1, pOutput);

        index = 0;
        byte = 0;
    }
}

fclose(pInput);
	return 0;
}
