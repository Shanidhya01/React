#include <stdio.h>

int sum(int n);
int sum(int n) {
    if (n==1 ||  n == 0) {
        return n;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of %d is %d", num, sum(num));
    return 0;
}

