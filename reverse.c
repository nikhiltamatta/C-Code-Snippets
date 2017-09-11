#include <stdio.h>
#include <conio.h>
void main()
{
    int r,num,rev=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    do
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    while(num>0);
    printf("reverse=%d",rev);
    getch();
}
