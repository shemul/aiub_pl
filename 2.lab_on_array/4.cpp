#include<stdio.h>
void main(void)
{
	int i,j,array1[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&array1[i]);

	}
	for(i=0;i<10;i++)
	{
		if(array1[i] >= 0)
		{
			printf("%d\n",array1[i]);
		}
		else
		{
			break;
		}
	}
}
