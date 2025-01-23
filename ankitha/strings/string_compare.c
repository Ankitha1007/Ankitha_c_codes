#include <stdio.h>

int string_compare(char str[],char str1[])
{
    int i;
    for(i=0;str[i]==str1[i];i++)
    {
        if(str1[i] == '\0')
        {
            return 0;
        }
    }
    return (str[i] - str1[i]);
}
int main() 
{
    char str[10]="ankithaaaa";
    char str1[10]="ankitha";
    int res=string_compare(str,str1);
    if(res ==0)
    {
        printf("same\n");
    }
    else
    {
        printf("not same\n");
    }
}






/*#include <stdio.h>
#include <string.h>

char str_cmp(char *str, char *str1)
{
	int l1 = strlen(str);
	int l2 = strlen(str1);
	int i,flag=0;
	if(l1 != l2)
	{
	    printf("Strings not same\n");
		return 0;
	}
	for(i=0;i<l2;i++)
	{
		if(str[i] != str1[i])
		{
		    printf("Not same\n");
		    break;
		}
	}
	printf("String is same\n");
	return 1;
}

void main()
{
	char str[]="ankitha";
	char str1[]="ankitha";
	str_cmp(str,str1);
}*/
