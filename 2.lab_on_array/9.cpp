str9



#include<stdio.h>
#define max 100
int field[max][max];
int main()
{

    int i,j;
    for(i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%d",&field[i][j]);
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            if(j<i) 
            printf(" ");
            else
            printf("%d",field[i][j]);


        }
        printf("\n");

    }
    return 0;
}

