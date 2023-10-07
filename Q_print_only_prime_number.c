// input any number thos number is not prime number than print next prime number
#include <stdio.h>

int main() {
    int no,flag=1;
    printf("enter the number ");
    scanf("%d",&no);
    int i=2,j;
    while(i<no)
    {
        if(no%i==0)
        {
            j=2;
            no++;
            while(j<no)
            {
                if(no%j==0)
                {
                    break;
                }
                else
                {
                    j++;
                }
            }
            
        }
        else
        {
             i++;
        }
    }
    if(flag && no>=2)
    {
        printf("prime no is %d",no);
    }
    else
    {
        printf("not");
    }

    return 0;
}