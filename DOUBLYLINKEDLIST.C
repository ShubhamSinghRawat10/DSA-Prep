#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node* list_create();
struct node*temp,*head;
void creationdoublylist()
{
    //struct node*newnode=doublycreate();
    struct node*newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    int value;
    printf("enter the value:\n");
    scanf("%d",&value);
    newnode->prev=NULL;
    newnode->data=value;
    //newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void insertatfrontdoubly()
{
    struct node*newnode=list_create();

    // struct node*newnode;
    // newnode=(struct node*)malloc(1*sizeof(struct node));
    // int value;
    // printf("\nenter the value:\n");
    // scanf("%d",&value);
    // newnode->prev=NULL;
    // newnode->data=value;
    // //newnode->prev=NULL;
    // newnode->next=NULL;
    if(head==NULL)
    {
        printf("list is empty!");
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    printf("\nNode inserted in doubly linked list successfully!\n");
}
void insertatmidpostion()
{
    // int pos;
    // printf("enter the position:");
    // scanf("%d",&pos);
    struct node* newnode=list_create();
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    struct node*temp=head;
    int count=0;
    while (count<pos-1)
    {
        count++;
        temp=temp->next;
    }
    newnode->next=temp;
    newnode->prev=temp->next;
    temp->prev=newnode;
    newnode->prev->next=newnode;
    printf("\nNode inserted successfully at mid using position!\n");
}
void insertatenddoubly()
{
    struct node*newnode=list_create();
    struct node*temp=head;
    // struct node*newnode;
    // newnode=(struct node*)malloc(1*sizeof(struct node));
    // int value;
    // printf("\nenter the value:\n");
    // scanf("%d",&value);
    // newnode->prev=NULL;
    // newnode->data=value;
    // //newnode->prev=NULL;
    // newnode->next=NULL;
    if(head==NULL)
    {
        insertatfrontdoubly();
    } 

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    printf("\nNode inserted in doubly linked list successfully!\n");
}
struct node *list_create()
{
    struct node*newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    int value;
    printf("\nenter the value:\n");
    scanf("%d",&value);
    newnode->prev=NULL;
    newnode->data=value;
    //newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void deleteatfrontdoubly()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("\nCannot delete the node!!linked list is empty!");
    }
    else
    {
        head=head->next;
        head->prev=NULL;
    }
    free(temp);
    printf("\nNode from front deleted successfully!\n");
}
void deleteatenddoubly()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("cannot delete node!linked list is empty!");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
        printf("\nNode deleted successfully from end!!\n");
    }
}
void deleteatmid()
{
    struct node* q;
    struct node*temp;
    int pos;
    printf("\nenter the position you want to delete at:");
    scanf("%d",&pos);
    temp=head;
    if(head==NULL)
    {
        printf("List is empty!");
    }
    else
    {
        int counter=0;
        while(counter<pos-1)
        {
            q=temp;
            counter++;
            temp=temp->next;
        }
    }
    q->next=temp->next;
    free(temp);
    printf("\nNode deleted successfully at mid!\n");
}
void linearsearching()
{
    int value,found=0,pos=0;
    printf("\nenter the element :");
    scanf("%d",&value);
    struct node*temp=head;
    while(temp!=NULL)
    {
        if((temp->data)==value)
        {
           found=1;
        }
        temp=temp->next;
        pos++;
    }
    if(found==1)
    {
        printf("\nelements found !");
    }
    else
    {
        printf("\nelments not found !");
    }
}
void count_doubly_node_list()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("list is empty! no node is present!\n");
    }
    else
    {
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("\nno. of nodes is linked list are %d\n",count);
    }
}
void traverselist()
{
    struct node*t=head;
    if(head==NULL)
    {
        printf("linked list is empty!");
    }
    while(t!=NULL)
    {
        //printf("%u->",t->prev);
        printf("%d->",t->data);
        //printf("%u->",t->next);
        t=t->next;
    }
}
int main()
{
    creationdoublylist();
    creationdoublylist();
    creationdoublylist();
    creationdoublylist();
    traverselist();
    // insertatfrontdoubly();
    // traverselist();
    // insertatenddoubly();
    // traverselist();
    // insertatmidpostion();
    // traverselist();
    // deleteatfrontdoubly();
    // traverselist();
    // deleteatenddoubly();
    // traverselist();
    deleteatmid();
    traverselist();
    linearsearching();
    count_doubly_node_list();
}