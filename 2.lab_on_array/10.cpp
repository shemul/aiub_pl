str10




#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char arr1[1000],arr2[1000];
    gets(arr1);
    scanf(" %[^\n]",arr2);
    for(i=0;i<strlen(arr1);i++)
    {
        if(arr1[i]==arr2[0])
        {

            for(j=1,i=i+1;j<strlen(arr1);j++)
            {

                if(arr1[i]!=arr2[j])
                break;

            }
            if(j==strlen(arr2))
            count++;

        }

    }
    printf("%d\n",count);


    return 0;
}

