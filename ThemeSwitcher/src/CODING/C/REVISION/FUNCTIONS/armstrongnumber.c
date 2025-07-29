// #include <stdio.h>
// #include <math.h>
// int armstrong(int n)
// {
//     int d1, d2, d3, sum=0;
//     while(n!=0){
//     d3 = n % 10;
//     d2 = (n / 10) % 10;
//     d1 = n / 100;
//     }
//     sum = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
//     return sum;
// }
// int main()
// {
//     int n, d1, d2, d3, sum, check;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     check = armstrong(n);
//     if (sum == n)
//         printf("armstrong number");
//     else
//         printf("not armstong number");
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0;
    int originalNumber = n;
    int numDigits = 0;

    // Counting the number of digits in the number
    while (n != 0) {
        n /= 10;
        numDigits++;
    }

    n = originalNumber; // Reset n to the original number

    // Calculating the sum of cubes of digits
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalNumber; // Returns 1 if Armstrong, 0 otherwise
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("Armstrong number");
    } else {
        printf("Not an Armstrong number");
    }

    return 0;
}
