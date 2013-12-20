#include<stdio.h>

void main(void)
{
	int num , i , sum= 0 , avg ,max;
	printf("Please Input N");
	scanf("%d",&num );
	for ( i = 1 ; i < num ; i++)
	{
		if ( num % i == 0 )
		{
			sum = sum + i ;
		}

	}
	
	if ( num == sum )
	{
		printf("Whoa ! Perfect Number");
	}
	else
	{
		printf("oops ! Not Perfect Number");
	}
}
