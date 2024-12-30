#include <stdio.h>
#include <stdbool.h>


int prime(int num)
{
    int flag=0,i;
    
   if(num == 0 || num ==1)
    {
        return false;
    }
    
    for(i=2;i*i<=num/2;i++)
    {
        if(num %i == 0)
        {
            return false;
        }
    } 
    return true;
}

int main()
{
    int num =5;
    int i,flag=0;
    for(i=0;i<=num;i++)
    {
        if(prime(i))
        {
            printf("%d\n",i);
        }
    }
}
