 #include <stdio.h>     
 int main()     
 {     
	 int max1 , max2,i,n=6;
	 int a[6] = {9,5,7,4,10,2};

		max1 = a[0];
		max2 = a[1];

for (i = 1; i < n; i++)
{
    if (max1 < a[i])
    {
        max2 = max1;
        max1 = a[i];
    }

   
    if (max2 < a[i] && max1 != a[i]) 
	{
			max2 = a[i];
	}
}
printf("%d",max2);

 }    