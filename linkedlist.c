#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}
*head = NULL;
struct node *NewNode(int n){
    struct node*NewNode=(struct node *)malloc(sizeof(struct node));
    NewNode->data = n;
    NewNode->next=NULL;
    return NewNode;
}