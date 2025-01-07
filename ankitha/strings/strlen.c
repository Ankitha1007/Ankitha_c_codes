#include <stdio.h>
#include <string.h>

int str_length(char *src)
{
	int i,count=0;
	for(i=0; src[i]!='\0'; i++)
	{
		count++;
	}
	return count;
}

void main()
{
	char str[100]= "mirafra.com";
	int len;
	len = str_length(str);
	printf("%d is the length of string\n",len);
}
