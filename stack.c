#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push();
void Pop();
void isfull();
void Display();
void peek();
//stack

//push function
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
//peek
void peek(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        printf("Toppest element of stack is %d\n",stack[top]);
    }
}
//Is full
void isfull(){
    if(top==CAPACITY-1){
        printf("Stack overflow");
    }
    else {
        printf("Enter the element if stack is not full : %d\n",top-CAPACITY);
    }

}
// Is empty
void isempty(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        printf("Enter the element if stack is not empty: %d\n",CAPACITY-top++);
    }
}
//pop functn
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
//display function
void Display(){
    printf("......Displaying stack..... ");
    printf("Enter elements in stack area \n");
    for(int i =top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    push();
    push();
    push();
    push();
    push();
    pop();
    isempty();
    isfull();
    peek();
    Display();
}
//end of code
//acha