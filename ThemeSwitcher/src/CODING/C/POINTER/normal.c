#include<stdio.h>
int main(){
    int a=5;
    int* x = &a; //int* -> int ka address store karta hai
    // VVIP ->  *x = 7  ;  //A IS CHANGED
    int** y = &x;  // int** -> int* ka address print hota hai
    printf("%p\n",&x);     //%p se address print hota hai
    printf("%p\n",y);
    return 0;
}