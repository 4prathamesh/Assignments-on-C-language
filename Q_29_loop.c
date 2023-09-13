// 29.	Write a C program to find all prime factors of a number.
#include<stdio.h>
int main()
{
    int i,j,no,count=0;

    printf("enter the number ");
    scanf("%d",&no);

    for(i=1;i<no;i++)   //n=12
    {
        count=0;
        if(no%i==0)    //i=2
        {

            for(j=2;j<i;j++) //j<2
            {
                if(i%j==0)  //2%1=0
                {
                    count++;
                    break;
                }

            }
            if(count==0&&i!=1)
                {
                    printf("%d ",i);
                }
            
            //printf("%d ",i);
        }
    }
    return 0;
}