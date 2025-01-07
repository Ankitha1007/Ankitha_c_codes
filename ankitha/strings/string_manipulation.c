#include <stdio.h>
#include <string.h>

char string_compare(char *str1, char *str2)
{
    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("%d\n",len1);
    printf("%d\n",len2);
    if(len1!=len2)
    {
        printf("Strings are not same\n");
        return 1;
    }
    for(i=0;i<len2;i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not same\n");
            return 1;
        }
    }
    printf("strings are same\n");
    
    return 0;
    
}

char string_copy(char *dst,char *source)
{
    int i;
    for(i=0;source[i]!='\0';i++)
    {
        dst[i]= source[i];
    }
    dst[i]='\0';
    printf("string copy: %s\n",dst);
}

char string_concat(char *str1, char *str2)
{
    int i;
    int len=  strlen(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str1[len++] = str2[i];
    }
    printf("string concat: %s\n",str1);
}


char *my_strcat(char *dest, const char *src)
{
    char *temp = dest;
    if(dest==NULL)
      return NULL;
    
    size_t len = strlen(dest);
    printf("%d",len);
    temp = temp + len;
    while(*src)
      *temp++ = *src++;
      
    return dest;
}

int main() 
{
    char str1[100];
    char str2[100];
    char dst[100];
    char *ptr = NULL;//"Harry Potter";
    ptr = str2;
    int i,j;
    printf("Enter the string 1: ");
    scanf("%[^\n]",&str1);
    getchar();
    printf("Enter the string 2: ");
    scanf("%[^\n]",&str2);
    string_compare(str1,str2);
    string_copy(ptr,str2);
    string_concat(str1,ptr);
    my_strcat(str1,str2);
    printf("my_strcat:- %s\n",str1);
    
}
