#include<stdio.h>
#include<conio.h>
void main()
{
     int a[3][3],i,j;
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
        printf("\n");
    }
    printf("Transpose matrix :");
     for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
    getch();
}
