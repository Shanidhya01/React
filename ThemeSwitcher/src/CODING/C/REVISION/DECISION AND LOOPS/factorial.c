#include <stdio.h>
int main()
{
    int i, j, factorial = 1, n;
    printf("the number whose factorial is to be calculated  : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial = %d", factorial);
    return 0;
}