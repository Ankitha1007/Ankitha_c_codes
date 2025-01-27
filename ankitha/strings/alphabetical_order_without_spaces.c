#include <stdio.h>

char alphabetical_order(const char *str)
{
    int i,j,k=0;
    char temp;
    char buffer[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            buffer[k++] = str[i];
        }
    }
    buffer[k]='\0';
    
    for(i=0;buffer[i]!='\0';i++)
    {
        for(j=i+1;buffer[j]!='\0';j++)
        {
            if(buffer[i]>buffer[j])
            {
              temp = buffer[i];
              buffer[i]=buffer[j];
              buffer[j]=temp;
            }
        }
    }
    for(i=0;buffer[i]!='\0';i++)
    {
        printf("%c",buffer[i]);
    }
}
    
int main()
{
    const char str[100]="Ankitha is a good girl";
    alphabetical_order(str);
}
