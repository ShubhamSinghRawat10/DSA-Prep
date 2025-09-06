#include<stdio.h>
#define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int value){
    if(rear == MAX - 1)
    {
        printf("queue overflow",value);

    }
    else if(front==-1 && rear==-1){
        front = rear +1;
        queue[rear]=value;
    }
    else{
        
    }
}