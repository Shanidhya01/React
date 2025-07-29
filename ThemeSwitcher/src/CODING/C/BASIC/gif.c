#include<stdio.h>
int main(){
    float x ;
    printf("The number is :  ");
    scanf("%f",&x);
     if(x>=0){
    int y=x;
    printf("  the integer part is : %d\n",y);
     float z = x - y;
     printf(" the decimal part is  : %f",z);
    }
    else{
        int y=x-1;
     printf("  the integer part is : %d\n",y);
     float z = x - y;
     printf(" the decimal part is  : %f",z);
    }
    return 0;
}