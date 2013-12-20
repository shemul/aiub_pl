#include<stdio.h>
int isPrime(int a)
{
	int i,f=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			f=1;
			break;
		}
	}
		if(f==0)
			printf("%d\n",a);
		
		return 0;

}
int main()
{
	int n,i;
	printf("enter a value: ");
	scanf("%d",&n);
	isPrime(n);
	for(i=1;i<=100;i++)
	{
		isPrime(i);
	}
	printf("%d",isPrime);
	return 0;
}