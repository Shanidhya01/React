#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    //ternary operatoe
    // exp1 ? exp2 : exp3
    num%2==0 ?  printf("%d is even number", num):  printf("%d is odd number", num)  ;

    // if(num % 2 == 0)
    //     printf("%d is even number", num);
    // else
    //     printf("%d is odd number", num);
    
    return 0;
}
