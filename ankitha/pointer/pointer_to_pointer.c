/* A pointer to a pointer (also known as a double pointer) is a variable that stores the address of another pointer variable*/

#include <stdio.h>

int main() 
{
    int num=10;
    int *ptr = &num;
    
    int **pointer_to_pointer = &ptr;
    printf("value: %d\n",num);
    printf("value: %d\n",*ptr);
    printf("value: %d\n",**pointer_to_pointer);
    
    printf("address of num: %p\n",&num);
    printf("address stored in ptr: %p\n",(void*)ptr); // it prints address stored in pointer
    printf("address stored in pointer to pointer: %p\n",(void *)pointer_to_pointer); // it prints address stored in pointer to pointer
    
    printf("address of num: %p\n",&num);
    printf("address of ptr: %p\n",&ptr);
    printf("address of pointer to pointer: %p\n",&pointer_to_pointer);
}

/* ouput:
value: 10
value: 10
value: 10
address of num: 0x7ffc1d9119dc
address stored in ptr: 0x7ffc1d9119dc
address stored in pointer to pointer: 0x7ffc1d9119d0
address of num: 0x7ffc1d9119dc
address of ptr: 0x7ffc1d9119d0
address of pointer to pointer: 0x7ffc1d9119c8
*/
