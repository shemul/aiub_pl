#include<stdio.h>

void main()
{
	int i , j ; 
	int intarr[5]  = {2,3,4,5,6} ;
	int intarr_n[5] ;

	for ( i =0 ; i < 5 ; i++)
	{
		intarr_n[i] = intarr[i] ; 
	}

	for (j=0 ; j<5 ; j++)
	{
		printf("%d",intarr_n[j]);
	}
}