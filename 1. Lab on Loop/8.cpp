#include<stdio.h>
void main(void)
{
	int n,i,j;
	printf("entre numbre\n");
	scanf("%d",&n);
	i=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}