#include <stdio.h>
#define maxsize 3
int q[maxsize], front = -1, rear = -1;
void insert(){
    int n;
    if (rear == maxsize - 1) {
        printf("\nQueue is full\n");
    }
    else {
        printf("\nEnter the data to be added: ");
        scanf("%d", &n);
        if (front == -1) {  // Initialize front for the first element
            front = 0;
        }
        q[++rear] = n;
        printf("%d added to the queue.\n", n);
    }
}
void delete(){
    if (front == rear == -1) {
        printf("\nQueue is empty\n");    // Reset front and rear when the queue is empty
        front = -1;
        rear = -1;
    }
    else {
        printf("\n%d is deleted\n", q[front++]);
        if (front > rear) {  // Reset the queue when all elements are deleted
            front = -1;
            rear = -1;
        }
    }
}
void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty\n");
    } 
    else {
        printf("\nQueue status is: ");
        for (int i = front; i <= rear; i++) {
            printf("%d\t", q[i]);
        }
        printf("\n");
    }
}
int main() {
    int ch;
    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display();break;
            case 4: printf("\nExiting. Goodbye!\n"); return 0;
            default: printf("\nInvalid choice\n");
        }
    }
    return 0;
}