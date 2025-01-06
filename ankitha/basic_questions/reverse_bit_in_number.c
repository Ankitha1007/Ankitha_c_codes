#include <stdio.h>

void display(int num)
{
    int i;
    for(i=31;i>=0;i--)
    {
        int rev = num >> i & 1;
        printf("%d",rev);
    }
    
}

void main()
{
	unsigned int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i,j;
	for(i=0,j=31;i<j;j>31,i++,j--)
	{
	    if( (num & (1 <<i)) != (num & (1 <<j )))
	    {
	        num = num ^ (1 <<i);
	        num = num ^ (1 << j);
	    }
	}
	display(num);
}
