/* int *const ptr
Meaning: The pointer itself is constant, meaning it cannot point to another variable.
Key Feature: The value it points to can be changed. */

//int b=20;
//ptr = &b; we cannot change the variable address

#include <stdio.h>

int main() 
{
    int a=10;
    int *const ptr = &a;
    printf("Value: %d\n",*ptr);
    printf("a:%p\n",&a);
    printf("ptr:%p\n",&ptr);
    printf("value ptr:%p\n",(void*)ptr);
    printf("==============================\n");
    *ptr = 20;
    printf("modified value :%d\n",*ptr);
    printf("ptr:%p\n",&ptr);
    printf("vlaue ptr:%p\n",(void*)ptr);
}
