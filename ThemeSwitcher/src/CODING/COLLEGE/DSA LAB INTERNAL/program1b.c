#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
char stack[50];
int top = -1;
void push(char x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int prior(char x){
    if(x == '(' || x == '#') return 1;
    if(x == '+' || x == '-') return 2;
    if(x == '*' || x == '/') return 3;
    if(x == '^' || x == '$') return 4;
}
int main(){
    char infix[20],postfix[20];
    int j = 0;
    printf("Enter the infix expression : ");
    gets(infix);
    push('#');
    for(int i=0;i<strlen(infix);i++){
        if(isalnum(infix[i]))          postfix[j++]=infix[i];
        else if(infix[i] == '(')       push(infix[i]);
        else if(infix[i] == ')'){
            while(stack[top]!='('){
                postfix[j++] = pop();
            }
            pop();
        }
        else{
            while(prior(stack[top])>=prior(infix[i])){
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }
    while(stack[top]!='#'){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("Postfix Expression is : ");
    puts(postfix);
    return 0;
}