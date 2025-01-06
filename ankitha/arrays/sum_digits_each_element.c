/*calculates the sum of digits for each element in an array of integers */

#include <stdio.h>

void main() {
    int arr[]={1,12,123,1234,12345,123456,1234567,12345678};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,sum,num;
    for(i=0;i<size;i++)
    {
        sum=0;
        num = arr[i];
        while(num > 0)
        {
            sum+= num%10;
            num = num /10;
        }
        printf("%d\n",sum);
    }
}
