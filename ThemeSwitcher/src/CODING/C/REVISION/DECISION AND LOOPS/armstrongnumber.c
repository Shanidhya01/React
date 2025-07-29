#include <stdio.h>
#include <math.h>
int main()
{
    int n, d1, d2, d3, sum;
    printf("Enter the number: ");
    scanf("%d", &n);
    d3 = n % 10;
    d2 = (n / 10) % 10;
    d1 = n / 100;
    sum = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
    if (sum == n)
        printf("armstrong number");
    else
        printf("not armstong number");
    return 0;
}
