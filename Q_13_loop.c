//13.	Write a C program to swap first and last digits of a number.

#include<stdio.h>
#include<math.h>
int main()
{
    int no,temp,count=0,last,mid,first,p=1,temp1,temp2,result,i=1;
    printf("enter the number ");
    scanf("%d",&no);

    temp=no;
    temp1=no;
    temp2=no;

    while(temp>0)
    {   
        temp=temp/10;
        count++;
    }
    printf("count %d\n",count);

    last=no%10;
    printf("l %d\n",last);

    no=no/10;
    
    count=count-2;
    //p=pow(10,(count));
    while(i<=count)
    {
        p=p*10;
        i++;
    }
    mid=no%p;
    printf("mid %d\n",mid);

    while(temp1>10)
    {
        temp1=temp1/10;
    }
    first=temp1;
    printf("f %d\n",first);

    p=p*10;
    result=(last*p) + (mid*10) + first;
    printf("%d\n",result);



    return 0;
}