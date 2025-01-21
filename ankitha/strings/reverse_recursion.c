#include <stdio.h>
#include <string.h>

char* rev(char *str,int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    int len = strlen(str);
    int i;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    rev(str, start+1,end-1);
}

int main()
{
  char buffer[8]="Ankitha";
  int len= strlen(buffer);
  printf("%s\n",buffer);
  int start=0,end=len-1;
  rev(buffer,start,end);
  printf("%s",buffer);
}
