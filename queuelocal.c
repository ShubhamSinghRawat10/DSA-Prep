#include "stdio.h"
#include "stdlib.h"
#define QUEUE_MAX 31
void enqueue(int QUEUE[], int *FRONT, int *REAR);
void dequeue(int QUEUE[], int *FRONT, int *REAR);
void peek(int QUEUE[], int FRONT, int REAR);
void isEmpty(int FRONT, int REAR);
void isFull(int REAR);
void traverse(int QUEUE[], int FRONT, int REAR);
void exitProgram();

void enqueue(int QUEUE[], int *FRONT, int *REAR)
{
    int enqueueElement;
    if (*REAR == QUEUE_MAX - 1)
    {
        printf("Queue Overflow! \n");
    }
    else if (*FRONT == -1 && *REAR == -1)
    {
        *FRONT = *REAR = 0;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[*REAR] = enqueueElement;
        printf("Element %d is Enqueued Successfully!!!\n", enqueueElement);
    }
    else
    {
        (*REAR)++;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[*REAR] = enqueueElement;
        printf("Element %d is Enqueued Successfully!!!\n", enqueueElement);
    }
}
void dequeue(int QUEUE[], int *FRONT, int *REAR)
{
    int dequeuedElement;
    if (*FRONT == -1 && *REAR == -1)
    {
        printf("Queue Underflow!!\n");
    }
    else if (*FRONT == *REAR)
    {
        dequeuedElement = QUEUE[*FRONT];
        *FRONT = *REAR = -1;
        printf("Element %d is Dequeued Successfully from the Queue!!\n", dequeuedElement);
    }
    else
    {
        dequeuedElement = QUEUE[*FRONT];
        (*FRONT)++;
        printf("Element %d is Dequeued Successfully from the Queue!!\n", dequeuedElement);
    }
}
void traverse(int QUEUE[], int FRONT, int REAR)
{
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("Value of FRONT is : %d\n", FRONT);
        printf("Elements in the Queue are: \n");
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("%d  ", QUEUE[i]);
        }
        printf("\n");
    }
}
void isEmpty(int FRONT, int REAR)
{
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue is Empty!!\n");
    }
    else
    {
        printf("Queue will be Empty after Dequeuing %d Elements !!\n", (REAR + 1) - FRONT);
    }
}

void isFull(int REAR)
{
    if (REAR == QUEUE_MAX - 1)
    {
        printf("Queue is FULL!!\n");
    }
    else
    {
        printf("Queue will be FULL after Enqueuing %d Elements !!\n", (QUEUE_MAX - 1) - REAR);
    }
}
void peek(int QUEUE[], int FRONT, int REAR)
{
    printf("\n------PEEK Queue------\n");
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!!\n");
    }
    else
    {
        printf("Front value of the QUEUE is : %d\n", QUEUE[FRONT]);
    }
}
void exitProgram()
{
    printf("\nDo you really want to Exit \nPRESS 1 to EXIT and 0 to CONTINUE\n");
    int ch;
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("\nExiting the program........\n");
        exit(0);
    }
    else if (ch == 0)
    {
        printf("\nContinuing the program........\n");
        return;
    }
    else
    {
        printf("\nReturning to Home!!\n");
        return;
    }
}
int main()
{
    int QUEUE[QUEUE_MAX];
    int FRONT = -1, REAR = -1;
    int choice;

    while (1)
    {
        printf("\n\n------QUEUE MENU------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. isEmpty\n");
        printf("6. isFull\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
/scascajnclanclk
        switch (choice)
        {
        case 1:
            enqueue(QUEUE, &FRONT, &REAR);
            break;
        case 2:
            dequeue(QUEUE, &FRONT, &REAR);
            break;
        case 3:
            peek(QUEUE, FRONT, REAR);
            break;
        case 4:
            traverse(QUEUE, FRONT, REAR);
            break;
        case 5:
            isEmpty(FRONT, REAR);
            break;
        case 6:
            isFull(REAR);
            break;
        case 7:
            exitProgram();
            break;
        default:
            printf("Invalid Choice!! Try Again.\n");
        }
    }

    return 0;
}
