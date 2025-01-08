#include <stdio.h>
#include <stdbool.h>

int check_length_fifth_element(int *ptr, int size) 
{
    int i,count=0;
    int target = ptr[4];
    for(i=0;i<size;i++)
    {
        if(ptr[i] == target)
        {
            count++;
        }
    }
    if(count == 3 && size == 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int arr[]={19,19,4,15,5,5,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool result= check_length_fifth_element(arr,size);
    printf("%d\n",result);
}
