#include<stdio.h>
void swap(int* x, int* y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
    return;
}
int main (){
    int a,c;
    printf("ENTER 1 st NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENTER 2 nd NUMBER  : ");
    scanf("%d",&b);
    int* x=&a;
    int* y=&b;
    swap(x,y);
    printf("the value of a is %d  \n",a);
    printf("the value of b is %d  \n",b);
    return 0;
}