// 19.	Write a C program to enter a number and print it in words.
/*
#include<stdio.h>
int main()
{
    int no,choice;

    do{
        printf("enter the number \n");
        scanf("%d",&no);

        printf("word %c\n",no);

        printf("re erntr the number ");
        scanf("%d",choice);
    } while(choice>1);
    

    return 0;
}*/


// 21.	Write a C program to find power of a number using for loop.
/*
#include<stdio.h>
int main()
{
    int no,p=1,in,a=1;

    printf("enter the no and index");
    scanf("%d%d",&no,&in);

    //no^a
    while(a<=in)
    {
        p=p*no;
        a++;
    }
    printf("%d\n",p);
    return 0;
}*/


// 22.	Write a C program to find all factors of a number.
// 5=1,5
// 6=1,2,3,6
#include<stdio.h>
int main()
{
    int no,fact=1;

    printf("enter the no");
    scanf("%d",&no);

    while(fact<=no)
    {
        
        if(no%fact==0)
        {
            printf("%d\t",fact);
        }
        fact++;
    }
    return 0;


}
