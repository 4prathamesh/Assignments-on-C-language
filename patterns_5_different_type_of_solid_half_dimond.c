// 3   
// 44  
// 555
// 6666
// 555
// 44
// 3
#include<stdio.h>
int main()
{
    int i,j,a=3;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i && i<5)
            {
                printf("%d",a);
                
            }
            else if(i>4 && j<=8-i)
            {
                printf("%d",a);
            }
            else{
                printf(" ");
            }
        }
        if(i<4)
        {
            a++;
        }
        else
        {
            --a;
        }
        
        printf("\n");
    }
    return 0;
}