#include <stdio.h>
#include <stdlib.h>
// Define the structure of a tree node
typedef struct Node {
    int data;               // Data stored in the node
    struct Node* left;      // Pointer to the left child
    struct Node* right;     // Pointer to the right child
} Node;
// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Function to insert a node into the Binary Search Tree
Node* insert(Node* root, int data) {
    if (root == NULL)                return createNode(data);
    if(data < root->data)            root->left = insert(root->left, data); 
    else if (data > root->data)      root->right = insert(root->right, data);
    return root;
}
// In-order traversal (Left, Root, Right)
void inorderTraversal(Node* root) {
    if(root != NULL){
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
// Pre-order traversal (Root, Left, Right)
void preorderTraversal(Node* root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
// Post-order traversal (Left, Right, Root)
void postorderTraversal(Node* root) {
    if(root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    Node* root = NULL;  // Initialize the root of the BST as NULL
    int choice, value;
    printf("Binary Search Tree Operations\n");
    printf("1. Insert\n");
    printf("2. In-order Traversal\n");
    printf("3. Pre-order Traversal\n");
    printf("4. Post-order Traversal\n");
    printf("5. Exit\n");
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("In-order Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Pre-order Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Post-order Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:                printf("Invalid choice! Please try again.\n");
        }
    }
}