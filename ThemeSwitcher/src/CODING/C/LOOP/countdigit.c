#include<stdio.h>
int main(){
    int n;
    printf("Enter a number  : ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
      n = n/10;
      count ++;
      }
  printf("THE NO OF DIGITS ARE %d",count);
  return 0;
}