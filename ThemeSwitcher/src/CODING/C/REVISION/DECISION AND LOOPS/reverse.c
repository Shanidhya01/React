#include<stdio.h>
int main(){
    int n,rev=0,digit;
    printf("ENETR A NUMBER  : \n");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        rev = rev *10 +digit;
        n=n/10;
    }
    printf("the reverse number is : %d",rev);
    return 0;
}
