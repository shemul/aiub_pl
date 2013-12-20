#include<stdio.h>
void main (void)
{
	int n,i,j;
	scanf("%d",&n);
	i=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n-i>=j)
				printf(" ");
			else
				printf("*");
		}

		printf("\n");
	}
	