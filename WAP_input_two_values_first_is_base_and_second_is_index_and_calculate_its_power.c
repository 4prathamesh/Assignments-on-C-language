#include<stdio.h>
int main()
{
    int base,index,i=1,power=1;
    printf("enter the base and index");
    scanf("%d%d",&base,&index);

    while(i<=index)
    {
        power=power*base;
        i++;
    }
    printf("%d",power);
    return 0;
}