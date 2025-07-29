#include<stdio.h>
int main(){
    float area,perimeter;
    float a;
    printf("Enter the length : ");
    scanf("%f",&a);
    
    float b;
    printf("Enter the breadth : ");
    scanf("%f",&b);
    area = a*b;
    perimeter = 2*(a+b);
    if (area>perimeter){
        printf("area is greater then perimeter");
    }     
    if (area<perimeter){
        printf("area is smaller then perimeter");
    }     
    if (area==perimeter){
        printf("area is equal to perimeter");
    }     
    
    return 0;
}