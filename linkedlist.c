#include<stdio.h>
#include<stdlib.h>
void createlinkedlist();
void display();
struct node{
  int data;
  struct node*link;
  
};

struct node*head=NULL,*temp=NULL;
int value;
void createlinkedlist(){

  struct node* newnode;
  newnode=(struct node*)malloc(sizeof(struct node)*1);
  printf("enter value");
  scanf("%d",&value);
  newnode->data=value;
  newnode->link=NULL;
  if(head==NULL){
    head=temp=newnode;
  }
  else{
    temp->link=newnode;
    temp=newnode;
  }
  //display
}

void display(){
    struct node*t=head;
    while(t!=NULL){
    printf("%d->",t->data);
    t=t->link;
  }
}
//main function
int main(){
  createlinkedlist();
  createlinkedlist();
  createlinkedlist();

  display();
}
//dequeue from rear