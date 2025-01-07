#include <stdio.h>
#include <string.h>
int main() 
{
    char str[]="ankitha";
    int len = strlen(str);
    int i,j;
    for(i=0;i<len/2;i++)
    {
        str[i] = str[i] -32;
    }
    printf("%s\n",str);
}
/* output: ANKitha*/
