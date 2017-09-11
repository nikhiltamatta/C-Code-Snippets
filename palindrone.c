#include <stdio.h>
#include <conio.h>
void main()
{
    int r,t,num,rev=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    t=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(rev==t)
    {
        printf("Number is Palindrome");
    }
    else
    printf("Number is not Palindrome");
    getch();
}
