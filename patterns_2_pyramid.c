// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
/* // Half pyramid
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

// inverted half pyramid
// * * * * * * 
// * * * * * 
// * * * *
// * * *
// * *
// *

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j<=7-i)
            {
                printf("* ");
            }            
        }
        printf("\n");
    }
    return 0;
}
*/

// hollow invertde helf pyramid
// ******
// *   * 
// *  *
// * *
// **
// *

/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(( (i==1) || (j<=1) ) || ( (j<=7-i) && (j>6-i) ))
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// full pyramid 

//           *
//         *   *
//       *   *   *
//     *   *   *   *
//   *   *   *   *   *
// *   *   *   *   *   *

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            if( ( (i%2!=0 && j%2==0) ||  ( i%2==0 && j%2!=0 ) ) &&   (j>=7-i) && (j<=5+i)  ) 
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// inverted pyramide 

// *   *   *   *   *   * 
//   *   *   *   *   *   
//     *   *   *   *
//       *   *   *       
//         *   *
//           *

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            if( ( (i%2==0 && j%2==0 ) || (i%2!=0 && j%2!=0) ) && (j>=i && j<=12-i) )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//Hollow full pyramid
//           *
//         *   *
//       *       *
//     *           *
//   *               *
// *   *   *   *   *   *
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            if( (i==6 && j%2!=0) || (j==7-i || j==5+i))
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