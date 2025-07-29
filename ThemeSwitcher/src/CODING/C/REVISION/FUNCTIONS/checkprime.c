#include <stdio.h>
int checkPrimeNumber(int n);
int main() {
    int n1, n2, i, count;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    // swap n1 and n2 if n1 > n2
    if (n1 > n2) {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {
        // count will be equal to 1 if i is prime
        count = checkPrimeNumber(i);
        if (count == 1)
            printf("%d \n", i);
    }
    return 0;
}
// user-defined function to check prime number
int checkPrimeNumber(int n) {
    int j, count = 1;

    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            count = 0;
            break;
        }
    }

    return count;
}
