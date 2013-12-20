#include<stdio.h>

void main(void)
{
	int  i  , input;
	for (i = 0 ; ; i+=input)
	{
		scanf("%d",&input);
		if (input < 0 )
		{
			break;
		}
		 
	}
	printf("%d",i);

}