#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    apple:printf("Enter the value of A :");
    scanf("%d",&a);
    if(a==10)
    printf("A is 10");
    else
    goto apple;
    getch();
}
