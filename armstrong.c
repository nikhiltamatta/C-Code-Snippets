#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,n,b=0,t;
    printf("Enter a Number :");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
    }
    if(b==t)
    {
        printf("Its an Armstrong Number");
    }
    else
    {
        printf("Its not an Armstrong Number");
    }
    getch();

    return 0;
}
