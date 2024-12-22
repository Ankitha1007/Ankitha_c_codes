// Write a c program to sort the numbers of a given list by sum of their digit
// ouput:- 1+1=2, 1+2=3, 1+3=4..........!!

#include <stdio.h>
int main() {
    int arr[]={11,12,13,14,15,16,17,18,19,20};
    int size =sizeof(arr)/sizeof(arr[0]);
    int i,ones=0,tens=0,sum=0;
    for(i=0;i<size;i++)
    {
        tens = arr[i]/10;
        printf("%d\t",tens);
        ones =arr[i]%10;
        printf("%d\t",ones);
        sum= ones+tens;
        printf("sum: %d\n",sum);
    }
}
