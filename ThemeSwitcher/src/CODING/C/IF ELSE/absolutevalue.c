#include<stdio.h>
int main(){
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    if(n<0){
        n = n*(-1);
    }
    printf("THE ABSOLUTE VALUE IS %f",n);
    return 0;
}