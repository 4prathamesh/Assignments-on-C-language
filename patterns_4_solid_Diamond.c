//     *    
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i &&  i%2==0 && j%2==0 && i<6)
            {
                printf("*");
            }
            else if (j>=6-i && j<=4+i && i%2!=0 && j%2!=0 && i<6)
            {
                printf("*");
            }
            else if(i>5 && (i%2==0 && j%2!=0) && j<=15-i && j>=i-5)
            {
                printf("*");
            }
            else if( i>5 && i%2!=0 && j%2==0 && j<=15-i && j>=i-5)
            {
                printf("*");
            }
            else{
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//     *    
//    * *   
//   *   *  
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i || j==4+i && i<6)
            {
                printf("*");
            }
            else if(j==i-5 || j==15-i && i>5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}