#include <stdio.h>
#include <stdlib.h>
#define sz 100
#define EMPTY -1 // Marker for empty slots
void bt(int a[sz], int ele){
    int c, p;
    if (a[0] == EMPTY){ // If the tree is empty, insert at the root
        a[0] = ele;
        return;
    }
    c = 0;
    while (a[c] != EMPTY){ // Traverse to find the correct position
        p = c;
        if (ele < a[c])    c = 2 * c + 1; // Move to the left child
        else               c = 2 * c + 2; // Move to the right child
    }
    // Insert the element
    if (ele < a[p])        c = 2 * p + 1; // Left child
    else                   c = 2 * p + 2; // Right child
    a[c] = ele;
}
void display(int a[sz]){
    printf("Constructed Binary Tree is:\n");
    for (int i = 0; i < sz; i++){
        if (a[i] != EMPTY){
            printf("a[%d] => %d\n", i, a[i]);
        }
    }
}
int main(){
    int n, a[sz], i, ele;
    // Initialize the binary tree array with EMPTY markers
    for (i = 0; i < sz; i++)
        a[i] = EMPTY;
    printf("Enter the number of elements to insert into the Binary Tree:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &ele);
        bt(a, ele); // Insert each element
    }
    // Display the tree after all insertions
    display(a);
    return 0;
}