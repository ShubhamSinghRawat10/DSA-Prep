#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int deque[SIZE];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
}
//hi hey boi
int isEmpty() {
    return (front == -1);
}
//enqueue at front
void enqueueFront(int x) {
    if (isFull()) {
        printf("Deque Overflow!\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front = front - 1;
    }
    deque[front] = x;
    printf("Inserted %d at front\n", x);
}
//enqueue at rear

void enqueueRear(int x) {
    if (isFull()) {
        printf("Deque Overflow!\n");
        return;
    }
    if (front == -1) { 
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = x;
    printf("Inserted %d at rear\n", x);
}
//dequeue from front

void dequeueFront() {
    if (isEmpty()) {
        printf("Deque Underflow!\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) { 
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}
//dequeue from rear
void dequeueRear() {
    if (isEmpty()) {
        printf("Deque Underflow!\n");
        return;
    }
    printf("Deleted %d from rear\n", deque[rear]);
    if (front == rear) { 
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear = rear - 1;
    }
}
//peek front
void peekFront() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
    } else {
        printf("Front element: %d\n", deque[front]);
    }
}
//peek rear
void peekRear() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
    } else {
        printf("Rear element: %d\n", deque[rear]);
    }
}
//traverse deque
void traverse() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
// main function with menu
int main() {
    int choice, val;
    while (1) {
        printf("\n------ MENU ------\n");
        printf("1. Enqueue Front\n");
        printf("2. Enqueue Rear\n");
        printf("3. Dequeue Front\n");
        printf("4. Dequeue Rear\n");
        printf("5. Peek Front\n");
        printf("6. Peek Rear\n");
        printf("7. Traverse\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueueFront(val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueueRear(val);
                break;
            case 3:
                dequeueFront();
                break;
            case 4:
                dequeueRear();
                break;
            case 5:
                peekFront();
                break;
            case 6:
                peekRear();
                break;
            case 7:
                traverse();
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
