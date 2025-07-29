#include <stdio.h>
// int power(int a, int b){
//     int x = 1 ;
//     for(int i=1;i<=b;i++){
//          x= x * a;
//     }
//     return x;
// }
int power(int a, int b) {
    if ( b== 0) {
        return 1;
    } 
   else {
        return   a * power(a,b - 1);
    }
}

int main() {
    int a;
    printf("Enter Base: ");
    scanf("%d", &a);
    int b;
    printf("Enter power: ");
    scanf("%d", &b);
    int p = power(a,b);
    printf("%d rasised to power %d is  %d",a,b,p);
    return 0;
}

