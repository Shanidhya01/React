#include <stdio.h>
#include <string.h>
#define SIZE 5
#define MSG_SIZE 100
char queue[SIZE][MSG_SIZE]; // Circular queue for strings
int front = -1, rear = -1;
void sendMessage(){
    if((rear + 1) % SIZE == front){
        printf("\nQueue is full!.\n");
        return;
    }
    printf("\nEnter the message to send: ");
    getchar(); // Clear input buffer before using gets()
    if (front == -1)    front = 0; // First element
    rear = (rear + 1) % SIZE;
    gets(queue[rear]); // Read the message
    printf("Message sent: %s\n", queue[rear]);
}
void receiveMessage() {
    if (front == -1) {
        printf("\nQueue is empty! No messages to receive.\n");
        return;
    }
    printf("Message received: %s\n", queue[front]);
    // Only one element was in the queue
    if (front == rear)    front = rear = -1;	
    else                  front = (front + 1) % SIZE;
}
void displayMessages() {
    if (front == -1) {
        printf("\nQueue is empty! No messages to display.\n");
        return;
    }
    printf("\nMessages in the queue:\n");
    int i = front;
    while (1) {
        printf("- %s\n", queue[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n1. Send Message\n2. Receive Message\n3. Display Messages\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: sendMessage(); break;
            case 2: receiveMessage(); break;
            case 3: displayMessages(); break;
            case 4: printf("Exiting Messaging System.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}