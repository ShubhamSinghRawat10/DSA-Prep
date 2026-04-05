#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push(int stack[],int *top);
void Pop(int stack[],int *top);
void isfull(int top);
void isempty(int top);
void Display(int stack[],int top);
void peek(int stack[],int top);

void push(int stack[],int *top){
    if (*top==CAPACITY-1){
        printf("stack overflow");
    }
    else{
        int value;
        printf("Enter the value you want to enter: ");
        scanf("%d",&value);
        stack[++(*top)]=value;
        printf("%d pushed to stack",value);
    }
}

void peek(int stack[],int top){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        printf("Toppest element of stack is %d\n",stack[top]);
    }
}
void isfull(int top){
    if(top==CAPACITY-1){
        printf("Stack overflow");
    }
    else {
        printf("Enter the element if stack is not full : %d\n",CAPACITY-top);
    }
    
}
void isempty(int top){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        printf("Enter the element if stack is not empty: %d\n",CAPACITY-top++);
    }
}
void pop(int stack[],int *top){
    if(*top==-1){
        printf("stack underflow");
    }
    else{
        int valuepop;
        valuepop=stack[*top];
        printf("enter the value you want to delete: %d\n",valuepop);
        top--;
    }
}

void Display(int stack[], int top){
    printf("......Displaying stack..... ");
    printf("Enter elements in stack area \n");
    for(int i =top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
//d
int main(){
    int stack[CAPACITY];
    int top=-1;
    push(stack, &top);
    push(stack,&top);
    push(stack,&top);
    push(stack,&top);
    pop(stack,&top);
    isempty(top);
    isfull(top);
    peek(stack,top);
    Display(stack,top);
}