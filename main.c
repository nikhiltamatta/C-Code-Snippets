//
//  main.c
//  Two Way Linked List
//
//  Created by Nikhil Tamatta on 24/02/19.
//  Copyright © 2019 Nikhil Tamatta. All rights reserved.
//

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*Head=NULL,*Tail=NULL;
void AddBeg(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(Head==NULL && Tail==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        Head=temp;
        Tail=temp;
    }
    else
    {
        temp->prev=NULL;
        temp->next=Head;
        Head->prev=temp;
        Head=temp;
    }
}
void AddEnd(int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(Head==NULL && Tail==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        Head=temp;
        Tail=temp;
    }
    else
    {
        temp->next=NULL;
        temp->prev=Tail;
        Tail->next=temp;
        Tail=temp;
    }
}
void Display()
{
    struct node *r;
    r=Head;
    if(Head==NULL && Tail==NULL)
    {
        printf("\nLinked List is empty.");
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
int main()
{
    int num,choice;
    while(1)
    {
        printf("\n\nMenu:-");
        printf("\n1.Insertion at Beginning.");
        printf("\n2.Insertion at End.");
        printf("\n3.Insertion at after a given node.");
        printf("\n4.Deletion at Beginning.");
        printf("\n5.Deletion at End.");
        printf("\n6.Deletion at after a given node.");
        printf("\n7.Display.");
        printf("\nEnter your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter the number you want to insert at beginning:");
                scanf("%d",&num);
                AddBeg(num);
                printf("\nNumber is Inserted at beginning.");
                break;
            case 2:printf("\nEnter the number you want to insert at End:");
                scanf("%d",&num);
                AddEnd(num);
                printf("\nNumber is Inserted at the End.");
                break;
            case 7:Display();
                
        }
        
    }
}
