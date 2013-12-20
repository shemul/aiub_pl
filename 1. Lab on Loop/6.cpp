#include<stdio.h>
void main()
{
	int low,high,fac,j,i ;
	scanf("%d%d",&low,&high);
	for ( i = low ; i <= high ; i++ )
	{
		for ( j = 1, fac = 1 ; j <= i ; j++ )
		{
		
			fac = fac * j ;
		}
		printf("\n%d\n",fac);
	}
}
