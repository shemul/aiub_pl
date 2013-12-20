#include<stdio.h>
int reverse(int num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	printf("the reverse numbers are %d",rev);
	
	return 0;
}
int main()
{
	int x,i;
	printf("enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x);
		reverse(x);
	}
	
	return 0;
}


