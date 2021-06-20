#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int BUFFSIZE = 256;
    
    char c;
    char str[BUFFSIZE];
    char sen[BUFFSIZE];
    
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, BUFFSIZE, stdin);
    /*
     *
     * Another way, using regex as input to scanf
    scanf("%c%*c", &ch);
    scanf("%s%*c", &s);
    scanf("%[^\n]%*c", &sen);
    */
    
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    
    return 0;
}
