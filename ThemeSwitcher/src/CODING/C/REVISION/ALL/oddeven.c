#include<stdio.h>
int main(){
    int n;
     printf("ENTER THE NUMBER : \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("NUMBER %d IS EVEN",n);
    }
    else   printf("NUMBER %d IS ODD",n);
    return 0;
}