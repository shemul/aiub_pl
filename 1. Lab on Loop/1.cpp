#include<stdio.h>
int main()
{
	int n,m,i,sum=0,avg=0,max=0;
	printf("how much numbers do u want to input??");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
	    sum=sum+m;
		if(m>max)
			max=m;

	}
	printf("sum is %d\n",sum);
	printf("max is %d\n",max);
	avg=sum/n;
	printf("avg is %d\n",avg);
	return 0;
}