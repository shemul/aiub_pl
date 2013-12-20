#include <stdio.h>
void main (void)
{
	int i , low , high , temp,j ;
	scanf("%d%d",&low,&high);

	for ( i = low ; i < high ; i++ )
	{
		for ( j = 2 ; j < high ; j++)
		{
			temp = i % j ;
			if ( temp == 0 )
			{
				
				break ;
			}
		}
		if ( i == j )
		{
			printf("%d\n", j );
		}

	}
}