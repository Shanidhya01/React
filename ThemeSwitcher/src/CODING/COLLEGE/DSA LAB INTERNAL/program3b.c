#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int digit;
    struct Node *next;
} Node;
Node* getnode(int digit){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->digit = digit;
    newNode->next = newNode;
    return newNode;
}
void addNode(Node* start, int digit){
    Node* newNode = getnode(digit);
    Node* temp = start;
    while (temp->next != start) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = start;
}
void displayList(Node* start) {
    Node* temp = start->next;
    if (temp == start) {
        printf("List is empty.\n");
        return;
    }
    while (temp != start) {
        printf("%d", temp->digit);
        temp = temp->next;
    }
    printf("\n");
}
Node* reverseList(Node* start) {
    Node* prev = start;
    Node* current = start->next;
    Node* next;
    if (current == start) return start;
    while (current != start) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start->next = prev;
    return start;
}
Node* addLongIntegers(Node* list1, Node* list2) {
    Node* resultstart = getnode(0);
    Node* temp1 = list1->next;
    Node* temp2 = list2->next;
    int carry = 0;
    while (temp1 != list1 || temp2 != list2 || carry != 0) {
        int sum = carry;
        if (temp1 != list1) {
            sum += temp1->digit;
            temp1 = temp1->next;
        }
        if (temp2 != list2) {
            sum += temp2->digit;
            temp2 = temp2->next;
        }
        carry = sum / 10;
        addNode(resultstart, sum % 10);
    }
    return resultstart;
}
int main() {
    Node* list1 = getnode(0);
    Node* list2 = getnode(0);
    int num1, num2;
    printf("Enter the first long integer: ");
    scanf("%d", &num1);
    if (num1 == 0) {
        addNode(list1, 0);
    } else {
        while (num1 > 0) {
            addNode(list1, num1 % 10);
            num1 /= 10;
        }
    }
    printf("Enter the second long integer: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        addNode(list2, 0);
    } else {
        while (num2 > 0) {
            addNode(list2, num2 % 10);
            num2 /= 10;
        }
    }
    Node* result = addLongIntegers(list1, list2);
    result = reverseList(result);
    printf("Sum: ");
    displayList(result);
    return 0;
}