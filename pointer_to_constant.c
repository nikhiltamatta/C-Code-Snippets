#include<stdio.h>
#include<conio.h>
main()
{
    int a[]={10,20};
    const int *p=a;
    p++;
    printf("%d",*p);
}
