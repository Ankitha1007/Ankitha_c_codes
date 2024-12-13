#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="madam@123";
    char res[100];
    int len = strlen(str);
    int i,flag=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=97 || str[i]>=99 && str[i]<=122)
        {
            res[i] = str[i];
        }
    }
    printf("%s\n",res);
}
