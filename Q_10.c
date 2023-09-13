// 10.	Write a C program to count number of digits in a number.
#include<stdio.h>
int main()
{
    int count=0,no;
    printf("enter the number is ");
    scanf("%d",&no);
    while(no>0)
    {
        no=no/10;
        count++;
    }
    printf("%d",count);
    return 0;
}