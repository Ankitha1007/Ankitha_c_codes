// Check wheather Kth bit is set or not...
#include <stdio.h>

int main() {
   int x =10;
   int k = 3;
   if((x & (1 << k)) !=0)
   {
       printf("Set\n");
   }
   else
   {
       printf("Reset\n");
   }
   
}
