#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[]={1,2,3,4,1,2,3,4,6,6,7,7,8,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    bool isprinted[100]={0};
    int i;
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] == arr[j] && !isprinted[arr[i]])
            {
                flag=1;
                printf("%d\n",arr[i]);
                isprinted[i]=true;
                break;
            }
        }
    }
}
