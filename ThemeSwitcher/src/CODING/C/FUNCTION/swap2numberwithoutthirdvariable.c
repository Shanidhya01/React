#include<stdio.h>
int main (){
    int a,c;
    printf("ENTER 1 st NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENETR 2 nd NUMBER  : ");
    scanf("%d",&b);
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("the value of a is %d  \n",a);
    printf("the value of b is %d  \n",b);
    return 0;
}