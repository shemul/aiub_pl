//string copy 


#include<stdio.h>
void main()
{
	int i, j,length = 0 ;
	char s1[100] ;
	char s2[100];
	gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	
	for ( i = 0  ; i < length ; i++)
	{
		s2[i] = s1[i] ;
	}
	s2[i] = '\0';
	printf("%s",s2);

}


//sting reverse 
#include<stdio.h>
void main()
{
	int i, j,length = 0 ;
	char s1[100] ;
	char s2[100];
	gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	
	for ( i = 0 , j = length-1 ; i < length ; i++,j--)
	{
		s2[j] = s1[i] ;
	}
	s2[i] = '\0';
	printf("%s",s2);

}



//string concatenation 

 #include <stdio.h>     
 int main()     
 {     
     char s1[] = "Visual", s2[] = "Studio", s3[100];     
     int i, j, length1 = 0, length2 = 0;     

	  for (i = 0; s1[i] != '\0'; i++)
	  {
			length1++;
	  }
	   for (i = 0; s1[i] != '\0'; i++)
	   {
		length2++;
	   }

     for(i = 0, j = 0; i < length1; i++, j++) {     
         s3[j] = s1[i];     
     }         
      for(i = 0; i < length2; i++, j++) 
	  {     
		s3[j] = s2[i];     
	  }    
     s3[j] = '\0';     
     printf("%s\n", s3);     
 }    