#include<stdio.h>
#include<math.h>
int main(){
    // int a;
    // printf("ENTER A NUMBER : ");
    // scanf("%d",&a);
    // float  root = sqrt(a);
    //  printf("THE SQUARE ROOT OF NUMBER IS : %f ",root);
    int a;
    printf("ENTER 1st NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENTER 2nd  NUMBER : ");
    scanf("%d",&b);
    float power = pow(a,b);
    printf("%f",power);
}