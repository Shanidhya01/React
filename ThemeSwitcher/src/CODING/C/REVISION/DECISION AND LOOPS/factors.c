#include<stdio.h>
int main (){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    printf("THE FACTORS OF %d ARE \n",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf(" %d \n",i);
        }
    }
    return 0;
}