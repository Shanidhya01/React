// #include <stdio.h>
// int main()
// {
//     int i, n1,n2 ,count = 0;
//     printf("ENTER A NUMBER : \n");
//     scanf("%d", &n1);
//     printf("ENTER A NUMBER : \n");
//     scanf("%d", &n2);
//     for (i = n1+1; i <=n2; i++)
//     {
//         if (n % i == 0)
//             count++;
//         if (count == 2)
//         printf(" %d is a prime number \n", n);
//     }
//     return 0;
// }
#include <stdio.h>
int main() {
    int n1, n2, i, count;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    // iteration until n1 is not equal to n2
    while (n1 < n2) {
        count = 0;
        // ignore numbers less than 2
        if (n1 <= 1) {
            ++n1;
            continue;
        }
        // if n1 is a non-prime number, count will be 1
        for (i = 2; i <= n1 / 2; ++i) {
            if (n1 % i == 0) {
                count = 1;
                break;
            }
        }
        if (count == 0)
            printf("%d\n ", n1);
        // to check prime for the next number
        // increase n1 by 1
        ++n1;
    }
    return 0;
}
