#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*tail=NULL;
void addAtBeg (int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof (struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void addAtEnd (int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof (struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        temp->prev=NULL;
        temp->next=head;
        temp->prev=temp;
        tail=temp;
    }
    else
    {
        temp->next=NULL;
        temp->prev=temp;
        tail->next=temp;
        tail=temp;
    }
}
void display()
{
    struct node *r;
    r=head;
    if(head==NULL && tail==NULL)
    {
        printf("\nLinked List is Empty");
        return;
    }
    else
    {
        while(r!=NULL)
        {
            printf("\n%d",r->data);
            r=r->next;
        }
    }
}
void main()
{
    int num,choice;
    while(1)
    {
        printf("\nMenu:");
        printf("\n1.Insertion at Beginning: ");
        printf("\n2.Insertion at End: ");
        printf("\n3 Display.");
        printf("\n4.Enter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter the Number: ");
                    scanf("%d",&num);
                    addAtBeg(num);
                    break;

            case 2: printf("\nEnter the Number:");
                    scanf("%d",&num);
                    addAtEnd(num);
                    break;

            case 3: display();
                    break;
        }
    }
}
