#include<stdio.h>
int main(){
  float n;
    printf("enter a number : ");
    scanf("%f",&n);
    for(int i=1;i<=(3*n+2);i=i+3){
        printf("%d\n",i);
    }
   return 0;
}