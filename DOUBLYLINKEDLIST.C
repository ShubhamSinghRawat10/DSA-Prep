#include<stdio.h>
#include "stdlib.h"
void createdoublylinkedlist();
void display();
struct node{
  int data;
  struct node*prev;
  struct node*next;
  
};
struct node*head=NULL,*temp=NULL;
int value;
void createdoublylinkedlist(){

  struct node* newnode;
  newnode=(struct node*)malloc(sizeof(struct node)*1);
  printf("enter value");
  scanf("%d",&value);
  newnode->data=value;
  newnode->prev=NULL;
  newnode->next=NULL;
  if(head==NULL){
    head=temp=newnode;
  }
  else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
  }
}
void traverselist(){
    struct node *t=head;
    if(head==NULL){
        printf("list is empty");
    }
    else{
    while(t!=NULL){
        printf("%d<->",t->data);
        t=t->next;
    }
    }
}
void reverselist(){
    struct node *t=temp;
    if(head==NULL){
        printf("list is empty");
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp->prev!=NULL){
        printf("%d<->",temp->data);
        temp=temp->prev;
    }
}
}