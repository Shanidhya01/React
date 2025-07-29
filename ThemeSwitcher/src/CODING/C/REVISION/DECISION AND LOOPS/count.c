#include<stdio.h>
int main(){
    int n;
    int count =0;
    printf("ENTER A NUMBER :  \n");
    scanf("%d",&n);
    do{
        n=n/10;
        count++;
    }while(n!=0);
    printf("%d",count);
    return 0;
}