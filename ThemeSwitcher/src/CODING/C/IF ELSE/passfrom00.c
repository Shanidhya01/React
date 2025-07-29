#include<stdio.h>
int main(){
    double a,b;
    printf("Enter the point a : ");
    scanf("%d",&a);
     printf("Enter the point b : ");
    scanf("%d",&b);   
    if (b==0 && a==0){
     printf("THE POINT IS ORIGIN");
    }
    else if(a==0){
       printf("IT LIES ON Y AXIS");
    }
    else if(b==0){
      printf("IT LIES ON X AXIS");
    }
    else{
        printf("point not lie on x, y axis");
    }
 return 0;
}