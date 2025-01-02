#include <stdio.h>
#include <string.h>

char rem_dup_char(char *str,int len)
{
	int i,j,k;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i] == str[j])
			{
				for(k=j;k<len;k++)
				{
					str[k] = str[k+1];
				}
				j--;
				len--;
				str[len-1]='\0';
			}
		}
	}
	printf("%s\n",str);

}


int main()
{
	char str[]="hello world hello";
	int len = strlen(str);
	rem_dup_char(str,len);
}

/* Without using length 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="ankithaankitha";
    int i,j,k;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i] == str[j])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k] = str[k+1];
                }
                j--;
            }
        }
    }
    printf("%s\n",str);
}*/
