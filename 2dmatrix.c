#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,sum=0,s=0;
    printf("Enter element of matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix :");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }

    }
    printf("\nSum of upper triangle of matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]<=a[j])
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\n%d",sum);
    printf("\nSum of lower triangle of matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]>=a[j])
            {
                s=s+a[i][j];
            }
        }
    }
    printf("\n%d",s);
getch();
}

