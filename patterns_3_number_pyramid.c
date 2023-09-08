// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("%d ",j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1 || j==i || i== 5)
            {
                printf("%d ",j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//----------------  solved 

//         1
//       2 3 2
//     3 4 5 4 3     
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
/*
#include<stdio.h>
int main()
{
    int i,j,num,count=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                
                if(j<=5)
                {
                    count++;
                }
                else{
                    count--;
                }
                printf("%d ",count);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5
// 5
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {/*
        for(j=1;j<=5;j++)
        {
            if(i==1 || j==1 || j==6-i)
            {
                printf("%d ",j+i-1);
            }
            else{
                printf("  ");
            }
        }
        /// secund consepte
        for(j=1;j<=5;j++)
        {
            if(i==1)
            {
                printf("%d ",j);
            }
            else if(j==1)
            {
                printf("%d ",i);
            }
            else if(j==6-i)
            {
                printf("5 ");
            }
            else{
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}*/

//     1    
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
/*
#include<stdio.h>
int main()
{
    int i,j,k=1,h=1;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i && j!=5)
            {
                printf("1");
            }
            else if(j==4+i)
            {
                printf("%d",k);
                k++;
            }
            else if( i==5 && j>2 && j%2!=0)
                {
                    printf("%d",j-h);
                    h++;
                }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 121
// 12321
// 1234321
// 123454321

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

// A 
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A

/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        for(j=i-1;j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==6-i)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    
}