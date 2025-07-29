#include<stdio.h>
int main (){
    float sp;
    printf("Enter the selling price : ");
    scanf("%f",&sp);
    float cp;
    printf("Enter the cost price : ");
    scanf("%f",&cp);
    if(sp>cp){
        printf("PROFIT");
     }
    else if(cp>sp){
        printf("LOSS");
    }
    else{
    printf("NO PROFIT,NO LOSS");
    }
    return 0;

}