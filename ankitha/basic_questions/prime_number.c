#include <stdio.h>
int  main()
{
	int n,i,flag = 0;
	printf("Enter the input: ");
	scanf("%d",&n);
	if(n == 0 || n == 1)
	{
		flag = 1;
	}

	for(i = 2 ; i<= n/2; i++)
	{
		if(n %i  == 0)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("Prime numbers: %d\n",n);
	}
	else
	{
		printf("Non prime number: %d\n",n);
	}








}