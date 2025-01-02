#include <stdio.h>
#include <string.h>

int main() 
{
   char str[100]="ankitha";
   char str1[]="ankitha";
   int i,j;
   int l1 = strlen(str);
   int l2 = strlen(str1);
   if(l1!=l2)
   {
       printf("Strings are not same\n");
       return 1;
   }
   
   for(i=0;i<l1;i++)
   {
       if(str[i]!=str1[i])
       {
           printf("strings are not same\n");
           return 1;
       }
   }
   printf("strings are same\n");
}
