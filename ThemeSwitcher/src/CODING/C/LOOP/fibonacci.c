#include<stdio.h>
int main (){
    int n;
    printf("Enetr a number : ");
    scanf("%d",&n);
    int sum =1;
    int a=1;
    int b=1;
    for (int i =1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        }
        printf("the %dth fibonacci number is %d",n,sum);
    return 0;
}