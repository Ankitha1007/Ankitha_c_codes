/*10
9
8
7
6
5
4
3
2
1
*/


#include <stdio.h>

int some(int n)
{
    if (n==1)
    {
        printf("%d",n);
        return n;
    }
    else
    {
        printf("%d\n",n);
        some(n-1);
    }
}
int main()
{
    int n=10;
    some(n);
}
