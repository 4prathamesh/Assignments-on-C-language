//1     *
//2    ***
//3   *****
//4  *******
//5 *********
//1 2 3 4 5 6 7 8 9
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j>=6-i) && (j<=4+i))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//                  i     j
//1 *               1     1
//2 * *             2     2
//3 * * *           3     3
//4 * * * *
//5 * * * * *
//6 * * * *
//7 * * *
//8 * *
//9 *
//  1 2 3 4 5
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            // if(j<=i)
            // {
            //     printf("* ");
            // }
            if((j<=i && i<=5) || (i>5) && (j<=10-i))
            {
                printf("* ");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}*/

//1     1
//2    2 3 
//3   4 5 6
//4  7 8 9 10
//   1234567

/*
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if( (j>=5-i) && (j<=3+i) )
            {
                if( ( (i%2==1) && (j%2==0) ) || ( (i%2==0) && (j%2==1) ) )
                {
                    printf("%d ",k);
                    k++;
                }
                else{
                    printf("  ");
                }
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/