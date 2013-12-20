 #include <stdio.h>     
 int main()     
 {     
	 int small1 , small2,i,n=6;
	 int a[6] = {9,5,7,4,10,2};

		small1 = small2 = a[0];

		for(int i = 1; i < 6; i++) {
			if(a[i]<small1) {
				small2 = small1;
				small1 = a[i];
			}
		}
printf("%d",small2);

 }    