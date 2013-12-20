#include<stdio.h>
void main()
{
	int i, s1_len = 0,s2_len=0;
	char s1[100] ;
	char s2[100];
	gets(s1);
	gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}

	printf("First Strings Length is %d \nSecond String Length is %d \nS1 + S2 = %d\n",s1_len,s2_len,s1_len + s2_len);
}
