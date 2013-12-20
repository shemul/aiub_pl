#include<stdio.h>

void main(void)
{
	int num,b,c;
	scanf("%d",&num);

	for(b=2;b<num;b++)
	{
		c=num%b;
		if (c==0)
		{
			printf("%d is a non-prime number\n",num);
			break;
		}
	}
		if(num==b)
		{
			printf("%d is a prime number\n",num);
		}
}
