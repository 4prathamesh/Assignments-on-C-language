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
            // else{
            //     printf(" ");
            // }
            
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
            if( (i%2!=0) && (j%2==0) && ( (j>=7-i) && (j<=5+i) ) || ( ( i%2==0 && j%2!=0 ) && ( (j>=7-i) && (j<=5+i) ) ) )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }

    // for(i=1;i<=6;i++)
    // {
    //     for(j=1;j<=11;j++)
    //     {
    //         if( (i%2!=0) && (j%2==0) && ( (j>=7-i) && (j<=5+i) ) )
    //         {
    //             printf("* ");
    //         }
    //         if( ( i%2==0 && j%2!=0 ) && ( (j>=7-i) && (j<=5+i) ) )
    //         {
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
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

#include <stdio.h>

int main() {
    int i,a[10],mid,l=0,r,len,skey;
    
    printf("enter the array element: \t");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("print array element :\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]----> %d \n",i,a[i]);
    }
    
    printf("enter the serch key:\n");
    scanf("%d",&skey);
    
    len=sizeof(a)/sizeof(a[0]);
    r=len-1;
    
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(a[mid]==skey)
        {
            printf("value is found %d",a[i]);
        }
        if(a[mid]<skey)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    

    return 0;
}