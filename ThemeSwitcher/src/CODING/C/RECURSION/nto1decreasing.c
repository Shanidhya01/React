#include<stdio.h>
void decrease(int n){
    if(n==0) return;
    printf("%d\n",n);
    decrease(n-1);
    return;
    }

int main (){
    int n;
    printf("ENTER  A  NUMBER  :   ");
    scanf("%d",&n);
    decrease(n);
     return 0;
}