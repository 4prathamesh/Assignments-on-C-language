#include<stdio.h>
#include<math.h>
int main()
{
    int number,n=0,i=0,p=0,rem=0,n1;

    printf("enter the number : \n");
    scanf("%d",&number);

    n=number;
    n1=number;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
    while(n1!=0)
    {
        rem=n1%10;
        n1=n1/10;
        p=p+pow(rem,i);
    }
    if(p==number)
    {
        printf("is armstrong \n");
    }
    else{
        printf("is not a armstrong\n");
    }
    printf("%d",p);
    return 0;
}

/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,rem,no,no2,p=0,i2=0;
    printf("enter the no :");
    scanf("%d",&n);

    no=n;

    while(no!=0)
    {
        no=no/10;
        i++;
        
    }
    printf("%d\n",i);
    no2=n;
    while(no2!=0)
    {
        rem=no2%10;
        no2=no2/10;

        // while(i2<=i)
        // {
        //     p=p+(i*rem);
        //     i2++;
        // }
        
        //p=p+pow(rem,i);
        
        while(no!=0){
        p=pow(rem,i);
        //printf("%d\n",p);
        }
    }
    if(p==n){
        printf("amr");

    }
    else{
        printf("not am");
    }
    //printf("%d",p);
    
    return 0;

}*/