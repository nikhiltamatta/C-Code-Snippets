#include<stdio.h>
#include<conio.h>
int arr[10],n=0,ptr=0,par,item,k=0,last=0;
int par1,leftt,rightt;
void insert()
{
    printf("\nEnter the item");
    scanf("%d",&item);
    n=n+1;
    ptr=n;
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=arr[par])
        {
            arr[ptr]=item;
            return;
        }
        arr[ptr]=item;
        ptr=par;
    }
    arr[1]=item;
}
void del()
{
    item=arr[1];
    last=arr[n];
    n=n-1;
    ptr=1;
    leftt=2;
    rightt=3;
    while(rightt<=n)
    {
        if(last>=arr[leftt]&& last>arr[rightt]);
        {
            arr[ptr]=last;
            return;
        }
        if(arr[rightt]<-arr[leftt])
        {
            arr[ptr]=arr[leftt];
            ptr=leftt;
        }
        else
        {
            arr[ptr]=arr[rightt];
            ptr=rightt;
        }
        leftt=2*ptr;
        rightt=leftt+1;
    }
    if(leftt==n&&last < arr[leftt])
    {
        arr[ptr]=arr[leftt];
        ptr=leftt;
    }
    arr[ptr]=last;
    return;
}
void display()
{
    int i;
    printf("\nElement of array are:");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
void main()
{
    int choice;
    while(1)
    {
        printf("\n1. Insert:");
        printf("\n2. Display:");
        printf("\nEnter Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: display();
                    break;
            case 3: del();
                    break;
        }
    }
}
