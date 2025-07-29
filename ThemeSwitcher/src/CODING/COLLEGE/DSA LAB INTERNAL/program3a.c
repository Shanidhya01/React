#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE getnode(){
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    if (x == NULL){
        printf("Out of memory\n");
        exit(0);
    }
    return x;
}
void freenode(NODE x){
    free(x);
}
NODE insert_at_position(int item, int pos, NODE head) {
    NODE temp, cur;
    temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if (pos == 1) {  // Insert at the beginning
        temp->link = head;
        return temp;
    }
    cur = head;
    for (int i = 1; i < pos - 1 && cur != NULL; i++) {
        cur = cur->link;
    }
    if (cur == NULL) {
        printf("Invalid position\n");
        freenode(temp);
        return head;
    }
    temp->link = cur->link;
    cur->link = temp;
    return head;
}
NODE delete_front(NODE head){
    NODE temp;
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }
    temp = head;
    head = head->link;
    printf("The deleted item is %d\n", temp->info);
    freenode(temp);
    return head;
}
void display(NODE head){
    NODE temp = head;
    if(head == NULL){
        printf("NO NODES IN THE LIST!!\n");
        return;
    }
    while(temp != NULL){
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
int main() {
    NODE head = NULL;
    int choice, item, position;
    for (;;) {
        printf("\n1.INSERT AT SPECIFIC POSITION\n2.DELETE FRONT\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                printf("Enter the position: ");
                scanf("%d", &position);
                head = insert_at_position(item, position, head);
                break;
            case 2:
                head = delete_front(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}