#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push();
void Pop();
void Display();
void peek();

void push(){
    if (top==CAPACITY-1){
        printf("stack overflow");
    }
    else{
        // int value;
        printf("Enter the value you want to enter: ");
        // scanf("%d",&value);
    // stack[++top]=value;
    scanf("%d",&stack[++top]);
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        int valuepop;
        valuepop=stack[top];
        printf("enter the value you want to delete: ",valuepop);
        top--;
    }
}
void Display(){
    printf("Display stack");
    printf("enter elements in stack area \n");
    for(int i =top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    push();
    Display();
}