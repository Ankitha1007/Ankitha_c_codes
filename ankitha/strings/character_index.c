/* print Character and index of charcter from 1 o/p: a1n2k3i4*/

#include <stdio.h>

int main() {
   char str[]="anki
   int count=0;
   int i;
   for(i=0;str[i]!='\0';i++)
   {
       count++;
      printf("%c%d",str[i],count);
   }
}
