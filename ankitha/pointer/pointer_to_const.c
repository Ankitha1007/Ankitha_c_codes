/* int const *ptr
Meaning: Same as const int *ptr. The value being pointed to cannot be changed through the pointer.
Key Feature: Works exactly like const int *ptr */

// ptr = 20; we cannot modify the value

#include <stdio.h>

int main() 
{
    int a=10,b=20;
    int const *ptr = &a;
    printf("a:%p\n",&a);
    printf("ptr:%p\n",&ptr);
    printf("value ptr:%p\n",(void*)ptr);
    printf("==============================\n");
    ptr = &b;
    printf("b:%p\n",&b);
    printf("ptr:%p\n",&ptr);
    printf("vlaue ptr:%p\n",(void*)ptr);
}

/* output:
a:0x7ffea235fbcc
ptr:0x7ffea235fbc0
value ptr:0x7ffea235fbcc
==============================
b:0x7ffea235fbc8
ptr:0x7ffea235fbc0
vlaue ptr:0x7ffea235fbc8
*/

/*==========================================================================================================*/

/* const int *ptr
Meaning: The value being pointed to by the pointer cannot be changed through the pointer.
Key Feature: The pointer can point to another integer, but the value it points to is read-only. */

#include <stdio.h>

int main() 
{
    int a=10,b=20;
    const int *ptr = &a;
    printf("a:%p\n",&a);
    printf("ptr:%p\n",&ptr);
    printf("value ptr:%p\n",(void*)ptr);
    printf("==============================\n");
    ptr = &b;
    printf("b:%p\n",&b);
    printf("ptr:%p\n",&ptr);
    printf("vlaue ptr:%p\n",(void*)ptr);
}

