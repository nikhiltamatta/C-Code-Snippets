#include<stdio.h>
#include<conio.h>
main()
{
    int x=10;
    int y=5,c=0;
    c=add(&x,&y);
    printf("%d",c);
}
int add(int *p,int *q)
{
    int s=0;
    s=*p+*q;
    return(s);
}
