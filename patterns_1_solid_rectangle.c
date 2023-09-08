// * * * * *
// * * * * *
// * * * * *
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// hollow rectangle
// * * * * *
// *       *
// * * * * * 

#include<stdio.h>
int main()
{
    int i,j ;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==2 && j>=i && j<5)
            {
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}