//write a program to enter element to the array bu using pointer to array to calculate the sum of the largest element and the smallest element.
#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],i,l,s,sum;
    int *p;
    p=a;
    printf("Enter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    l=p[0];
    for(i=0;i<5;i++)
    {
        if(l<*(p+i))
        {
            l=*(p+i);
        }
    }
    s=p[0];
    for(i=0;i<5;i++)
    {
        if(s>*(p+i))
        {
            s=*(p+i);
        }
    }
    sum=l+s;
    printf("Largest=%d\n",l);
    printf("Smallest=%d\n",s);
    printf("Sum=%d\n",sum);
}

