// Write a c program to sort the numbers of a given list by sum of their digit


#include <stdio.h>

int main() {
    int arr[]={21,22,23,24,25,26,27};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,digit,next,sum=0;
    for(i=0;i<size;i++)
    {
        digit= arr[i]%10;
        printf("%d\n",digit);
        next = arr[i] / 10;
        printf("%d\n",next);
        sum = digit +next;
        printf("%d sum value\n",sum);
        
    }
}
