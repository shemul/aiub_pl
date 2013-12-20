#include<stdio.h>
int Fibonacci(int n)
{
 int old_no,currnt_no,sum,i;
   i=1;
   old_no=0;
   currnt_no=1;
   while(i<=n)
   {
      sum=old_no+currnt_no;
      old_no=currnt_no;
      currnt_no=sum;
      i++;
      printf("\n%d",sum);
   }
 return(sum);
}

void main()
{
 int n;
 int i;
 printf("The value of n is: ");
 scanf("%d",&n);
   i=Fibonacci(n);
 printf("\nThe %dth Fibonacci number is %ld\n",n,i);
}