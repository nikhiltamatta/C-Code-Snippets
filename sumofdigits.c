#include <stdio.h>
#include <conio.h>
void main()
{
    int r, num, sum=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    do
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    while(num>0);
    printf("sum=%d",sum);
    getch();
}
