#include<stdio.h>

void main()
{
  int i ,max,min; 
  int a[10] = { 20, 60, 10, 30, 50, 40};
   max = a[0];
   min = a[0];
  for (i = 0; i < 6; i++)
	{
	  if (a[i] > max)
		{
		  max = a[i];
		}
	  else if (a[i] < min)
		{
		  min = a[i];
		}
	}
  printf ("Maximum element in an array : %d\n", max);
  printf ("Minimum element in an array : %d\n", min);

}
