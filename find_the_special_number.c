#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,f=1,sum=0,r,t;
    printf("Enter the number:");
    scanf("%d",&num);
    t=num;
    while(t>0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        t=t/10;
    }
    printf("%d\n",sum);
    if(num==sum)
        printf("Special Number");
    else
        printf("Not a Special Number");

}
