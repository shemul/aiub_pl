#include<stdio.h>
int max3(int a,int b,int c)
{
	int max;
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is max",a);
		}
		else
		{
			printf("%d is max",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is max",b);
		}
		else
		{
			printf("%d is max",c);
		}
	}
	return 0;
}
int main()
{
	int x,y,z;
	printf("enter three number");
	scanf("%d%d%d",&x,&y,&z);
	max3(x,y,z);
    return 0;
}
	