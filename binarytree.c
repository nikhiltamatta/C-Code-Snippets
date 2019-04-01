#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
}* root = NULL;
void search2(struct node * rut)
{
    if((temp->data>rut->)&&(rut->right!=NULL))
    {
        search2(rut->right);
    }
else if((temp->data>rut->data)&&(rut->right==NULL))
{
    rut->right=temp;
}
else if((temp->data<rut->data)&&(rut->left!=NULL))
{
    search2(rut->left);
}
else if ((temp->data<rut->data)&&(rut->left==NULL))
{
    rut->left=temp;
}
}
void create()
{
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be added:");
    scanf("%d",&item);
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        search2(root);
    }
}
void preorder (struct node *rut)
{
    if (rut!=NULL)
    {
        printf("%d\t",rut->data);
        preorder(rut->left);
        preorder(rut->right);
    }
}
void inorder(struct node *rut)
{
    if(rut!=NULL)
    {
        inorder(rut->left);
        print("%d\t",rut->data);
        inorder(rut->right);
    }
}
void postorder(struct node *rut)
{
    if(rut!=NULL)
    {
        postorder(rut->left);
        postorder(rut->right);
        printf("%d\t",rut-data);
    }
}
int main()
{
    int choice;
    while(1)
}
