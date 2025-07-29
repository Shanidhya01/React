#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER 1ST NUMBER : \n");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER : \n");
    scanf("%d",&b);
    if(a==b){
        printf("NUMBER ARE EQUAL");
    }
    else   printf("NUMBER ARE NOT EQUAL");
    return 0;
}