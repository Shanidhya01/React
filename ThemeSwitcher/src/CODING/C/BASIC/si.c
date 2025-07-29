#include <stdio.h> 
  
 
int main() 
{ 
     
    float principal,rate,time; 
    printf("Enter Principal : ");
    scanf("%f",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time : ");
    scanf("%f",&time);
    float SI = (principal * time * rate) / 100; 
  
    
    printf("Simple Interest = %f\n", SI); 
  
    return 0;
}