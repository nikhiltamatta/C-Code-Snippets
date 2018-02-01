#include<stdio.h>
#include<conio.h>
main()
{
    int x=8;
    int *p=&x;
    p++;
    printf("%u",p);
    printf("\n%p",p);
    printf("\n%x",p);
}
