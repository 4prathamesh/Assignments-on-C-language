#include<stdio.h>
int main()
{
    int First,last,no,temp,count=0;
    printf("enter the number :");
    scanf("%d",&no);

    temp=no;

    last=no%10;
    printf("%d\n",last);

    //temp2=no;
    while(no>=10)
    {
        no=no/10;

    }
    First=no;
    printf("%d\n",First);
    printf("%d",First+last);
    return 0;

}