//Implemented Insertion & Deletion Operations in a Single Linked List at 1.Beginning, 2.End, 3.After a given Node.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*p=NULL;
void Addatbeg(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        temp->next=p;
        p=temp;
    }
}
void Addatend(int num)
{
    struct node *temp,*r;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    r=p;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        while(r->next!=NULL)
        {
            r=r->next;
        }
        temp->next=NULL;
        r->next=temp;
    }
}
struct node * search(int item)
{
    struct node *r;
    r=p;
    while(r!=NULL)
    {
        if(r->data==item)
        {
            return r;
        }
        r=r->next;
    }
    return NULL;
};
void Addafter(int num,int num1)
{
    struct node *temp,*loc;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(loc==NULL)
    {
        printf("\nInsertion is not possible.");
        return;
    }
    else if(loc->next==NULL)
    {
        temp->next=NULL;
        loc->next=temp;
    }
    else
    {
        temp->next=loc->next;
        loc->next=temp;
    }

}
void Delbeg()
{
    struct node *r;
    r=p;
    if(r==NULL)
    {
        printf("\nOperation cannot be performed as the list is empty");
        return;
    }
    else
    {
        p=r->next;
        free(r);
        return;
    }
}
void Display()
{
    struct  node *r;
    r=p;
    if(p==NULL)
    {
        printf("\nLinked List is empty.");
    }
    while(r!=NULL)
    {
        printf("\n%d",r->data);
        r=r->next;
    }
}
void Delend()
{
    struct node *r,*r1;
    r=p;
    r1=p->next;
        if(p==NULL)
        {
            printf("\nLinked list is empty");
        }
        else
        {
             if(r->next==NULL)
             {
               p=NULL;
             }
             else
             {
             while(r1->next!=NULL)
             {
                r=r->next;
                r1=r1->next;
             }
             r->next=NULL;
             free(r1);
             }
        }
}
void Delafter(int num)
{
    struct node *loc,*r;
    if(p==NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {
        loc=search(num);
        if(loc==NULL)
        {
            printf("\nNumber do not exist.");
        }
        else if(loc->next==NULL)
        {
            printf("\nNumber after do not exist.");
        }
        else
        {
           r=loc->next;
           loc->next=r->next;
           free(r);

        }
    }
}
void main()
{
    int choice,num,num1;
    while(1)
    {
        printf("\nMenu:-");
        printf("\n1.Insertion at begining");
        printf("\n2.Insertion at End");
        printf("\n3.Insertion after a node");
        printf("\n4.Deletion at begining");
        printf("\n5.Deletion at End");
        printf("\n6.Deletion after a node");
        printf("\n7.Display");
        printf("\nEnter a Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter number you want to insert at begining:");
                   scanf("%d",&num);
                   Addatbeg(num);
                   printf("\nNumber is inserted at begining");
                   break;
            case 2:printf("\nEnter number you want to insert at end:");
                   scanf("%d",&num);
                   Addatend(num);
                   printf("\nNumber is inserted at end");
                   break;
            case 3:printf("\nEnter number you want to insert:");
                   scanf("%d",&num);
                   printf("\nEnter number after that you want to insert:");
                   scanf("%d",&num1);
                   Addafter(num,num1);
                   printf("\nNumber is inserted after the given number");
                   break;
            case 4:Delbeg();
                   printf("\nNumber is deleted at begining");
                   break;
            case 5:Delend();
                   printf("\nNumber is deleted at end");
                   break;
            case 6:printf("\nEnter the number after which you want to delete:");
                   scanf("%d",&num);
                   Delafter(num);
                   printf("\nNumber is deleted after");
                   break;
            case 7:Display();
                   break;
        }
    }

    return 0;
}
