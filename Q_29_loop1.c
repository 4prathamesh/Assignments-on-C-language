#include<stdio.h>
int main()
{
    int no,i,j,num,count;
    printf("\n Enter number :");
    scanf("%d",&no);

    for(i=1;i<=no/2;i++)  //factor loop
    {
          if(no%i==0)
          {
              num=i;   //i which is factor of number. Here we check number is prime or not
              count=0;
              for(j=2;j<=num;j++)
              {
                  if(num%j==0)
                  {
                      count++;
                    
                  }
                  if(count>1)
                  {
                      //printf("%d ",num);
                      break;
                  }
                  else
                  {
                      printf("%d ",num);
                  }
              }
          }
    }
    return 0;
}