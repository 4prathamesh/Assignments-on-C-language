// 14.	Write a C program to calculate sum of digits of a number.
/*
#include<stdio.h>
int main()
{
    int no,sum=0,rem;
    printf("ente the no: ");
    scanf("%d",&no);

    while(no>0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;
    }
    printf("\n%d",sum);

return 0;
}*/



// 15.	Write a C program to calculate product of digits of a number.
/*
#include<stdio.h>
int main()
{
    int no,i=1,rem;

    printf("ente the no: ");
    scanf("%d",&no);

    while(no>0)
    {
        rem=no%10;
        i=rem*i;
        no=no/10;
    }
    printf("%d\n",i);

    return 0;
}*/

//16.	Write a C program to enter a number and print its reverse.

#include<stdio.h>
int main()
{
    int no,rem,rev=0,temp,count=1;

    printf("ente the no: ");
    scanf("%d",&no);

    temp=no;

    while (temp>0)
    {
        temp=temp/10;
        count=count*10;
    }
    printf("%d\n",count);


    while(no>0)
    {   //1234
        rem=no%10;  // 4,3,2,1;
        count=count/10;
        rev=rev+rem*(count);
        no=no/10;
        //count--;

    }
    printf("%d\n",rev);

    return 0;
}

