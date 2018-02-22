//write a program to enter the names of 5 friends in different arrays that is one name in one array access the names
//of the different array by using array of different pointers.
#include<stdio.h>
#include<conio.h>
void main()
{
    char a[]={"devesh"};
    char b[]={"sattukillar"};
    char c[]={"gentleman"};
    char d[]={"anmol"};
    char e[]={"nancy"};
    int *p[5],i;
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    for(i=0;i<5;i++)
    {
        printf("%s\n",p[i]);
    }
}
