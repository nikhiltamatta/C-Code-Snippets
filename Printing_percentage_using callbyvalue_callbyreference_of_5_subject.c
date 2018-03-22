#include<stdio.h>
#include<conio.h>
void function(int,int,int,int,int);
void function1(int*,int*,int*,int*,int*);
void main()
{
    int a1,a2,a3,a4,a5,i;
    printf("Enter the marks of 5 subject:\n");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    function(a1,a2,a3,a4,a5);
    function1(&a1,&a2,&a3,&a4,&a5);
}
void function(int a, int b, int c,int d, int e)
{
    float sum,p;
    sum=a+b+c+d+e;
    p=sum*(0.2);
    printf("Call by value result:\n");
    printf("Percentage=%f\n",p);
}
void function1(int *f,int *g,int *h,int *i,int *j)
{
    float sum1,p1;
    sum1=(*f)+(*g)+(*h)+(*i)+(*j);
    p1=sum1*(0.2);
    printf("Call by reference:\n");
    printf("Percentage=%f",p1);
}

