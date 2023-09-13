// 2.	Write a C program to print all natural numbers 
//         in reverse (from n to 1). - using while loop

#include<stdio.h>
int main()
{
    int no;

    printf("enter the number is ");
    scanf("%d",&no);

    while(no>0)
    {
        printf("%d\t",no);
        no--;
    }

    return 0;
}