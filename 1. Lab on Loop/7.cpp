#include<stdio.h>
void main(void)
{
	int n,i,j;
	scanf("%d",&n);
	i=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}