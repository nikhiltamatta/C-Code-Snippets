#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int c=0;
    printf("Enter String 1 :");
    gets(str1);
    printf("Enter String 2 :");
    gets(str2);
    c=strcmp(str1,str2);
    if(c==0)
    {
        printf("Both are equal.");
        printf("\nstr1 in uppercase=%s",strupr(str1));
        printf("\nstr2 in uppercase=%s",strupr(str2));
    }
    else
    {
        printf("Both are not equal.");
        strcat(str1,str2);
        printf("\nConcatination=%s",str1);
    }
    getch();
}
