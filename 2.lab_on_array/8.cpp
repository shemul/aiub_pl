#include<stdio.h>

void main()
{
	int i, count = 0;
	char s1[100] ; 
	char ch[100];
	gets(s1);
	gets(ch);
    for (i = 0; s1[i] != '\0'; i++)
	{
		if( s1[i] == ch[0] ) //if it is only for one char 
		{
		count++;
		}
	}
	 printf("%d",count);
}