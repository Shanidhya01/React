#include<stdio.h>
int main(){
    double a,b,c,d,e,f;
    printf("Enter the point a : ");
    scanf("%f",&a);
     printf("Enter the point b : ");
    scanf("%f",&b);
     printf("Enter the point c : ");
    scanf("%f",&c);
     printf("Enter the point d : ");
    scanf("%f",&d);
     printf("Enter the point e : ");
    scanf("%f",&e);
     printf("Enter the point f : ");
    scanf("%f",&f);
 double m1,m2;
 m1 =(d-c)/(b-a);
 m2 =(f-e)/(d-c);
 if (m1==m2){
    printf("IT IS A STRAIGHT LINE");
 }
 else{
    printf("IT IS  NOT A STRAIGHT LINE");
 }
 return 0;
}