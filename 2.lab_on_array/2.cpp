#include<stdio.h>

void main()
{
	int i ,sum = 0 , avg ; 
	int myarr[6] = {10,20,30,40,50,60};
	for ( i = 0 ; i < 6 ; i++)
	{
		sum = sum + myarr[i] ;
	}
	avg = sum / 6 ; 
	printf("%d",avg);
}