#include<stdio.h>
int quadratic(int a,int b,int c,double x)
{
	int res=0;
	res=(a*(x*x))+(b*x)+c;
	printf("result is %d",res);
	return 0;
}
int main()
{
	int x,y,z;
	double p;
	printf("enter values");
	scanf("%d%d%d",&x,&y,&z);
	printf("enter double value");
	scanf("%lf",&p);
	quadratic(x,y,z,p);
	return 0;
}