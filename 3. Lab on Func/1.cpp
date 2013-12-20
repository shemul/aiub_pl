#include<stdio.h>
void multiprint(int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c",c);
	}
	printf("\n");
}
void printRightAngle(int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c",c);
	}
	printf("\n");
}

int main()
{
	int x=10,i,j;
	char ch='a';
	for(i=x;i>0;i--)
	{
		multiprint(i,ch);
	}
	for(i=1;i<=x;i++){
	printRightAngle(i,ch);
	}
	return 0;
}


