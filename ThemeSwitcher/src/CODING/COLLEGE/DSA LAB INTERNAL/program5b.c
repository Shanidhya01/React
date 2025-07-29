#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Define the structure of a tree node
struct Node {
    char value;           // The operand or operator
    struct Node* left;    // Left child
    struct Node* right;   // Right child
};
// Function to create a new node
struct Node* createNode(char value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')    return 1;
    if (op == '*' || op == '/')    return 2;
    return 0;
}
// Function to construct the expression tree from an infix expression
struct Node* constructTree(char* expr) {
    struct Node* stack[100];
    char opStack[100];
    int topStack = -1, topOp = -1;
    int i = 0;
    while (expr[i] != '\0') {
        char c = expr[i];
        // If the character is an operand (a single letter)
        if (isalnum(c))            stack[++topStack] = createNode(c);
        // If the character is an operator
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (topOp >= 0 && precedence(opStack[topOp]) >= precedence(c)) {
                struct Node* right = stack[topStack--];
                struct Node* left = stack[topStack--];
                char op = opStack[topOp--];
                struct Node* newNode = createNode(op);
                newNode->left = left;
                newNode->right = right;
                stack[++topStack] = newNode;
            }
            opStack[++topOp] = c;
        }
        i++;
    }
    // After finishing the loop, pop all the remaining operators
    while (topOp >= 0) {
        struct Node* right = stack[topStack--];
        struct Node* left = stack[topStack--];
        char op = opStack[topOp--];
        struct Node* newNode = createNode(op);
        newNode->left = left;
        newNode->right = right;
        stack[++topStack] = newNode;
    }
    return stack[topStack];
}
// Function to perform pre-order traversal and print the prefix expression
void preorder(struct Node* root) {
    if (root == NULL)          return;
    printf("%c", root->value); // Visit the root
    preorder(root->left);      // Visit the left subtree
    preorder(root->right);     // Visit the right subtree
}
// Function to perform post-order traversal and print the postfix expression
void postorder(struct Node* root) {
    if (root == NULL)          return;
    postorder(root->left);     // Visit the left subtree
    postorder(root->right);    // Visit the right subtree
    printf("%c", root->value); // Visit the root
}
int main() {
    char expr[100];
    printf("Enter an infix expression: ");
    scanf("%s", expr);
    struct Node* root = constructTree(expr);
    // Print the prefix and postfix expressions
    printf("Prefix expression: ");
    preorder(root);
    printf("\n");
    printf("Postfix expression: ");
    postorder(root);
    printf("\n");
    return 0;
}