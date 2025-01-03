#include <stdio.h>

int main()
{
   int arr[5]={1,2,3,4,5};
   int size = sizeof(arr)/sizeof(arr[0]);
   int i,j,k,flag=0;
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           for(k=j+1;k<size;k++)
           {
               printf("%d %d %d\n",arr[i],arr[j],arr[k]);
           }
       }
   }
}

/*Combination pairs output:
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5
   */
