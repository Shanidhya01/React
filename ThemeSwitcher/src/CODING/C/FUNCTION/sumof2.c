#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("ENTER 1st NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENTER 2nd NUMBER : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
}