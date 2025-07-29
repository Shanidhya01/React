#include<stdio.h>
int main(){
  float n;
    printf("enter a number : ");
    scanf("%f",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
   return 0;
}