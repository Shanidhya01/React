#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 2
int s[MAX_SIZE],top=-1;
void push(){
    int x;
    if(top==MAX_SIZE-1){
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter Element : ");
    scanf("%d",&x);
    s[++top]=x;
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    printf("The deleted element is %d \n",s[top]);
    top--;
}
void display(){
    if(top==-1) {
        printf("Stack is empty .....\n");
        return;
    }
    else{
        printf("Content of the stack are : \n");
        for(int i=0;i<=top;i++){
            printf(" %d",s[i]);
        }
        printf("\n");
    }
}
int main(){
    int ch;
    for(;;){
        printf("1.PUSH 2.POP 3.DISPLAY\n");
        printf("Enter the choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();    break;
            case 2: pop();     break;
            case 3: display(); break;
            default: exit(0);
        }
    }
    return 0;
}