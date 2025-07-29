#include <stdio.h>
int main()
{
    int i, j, sum = 0, n;
    printf("the number of terms to be added : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("sum = %d", sum);
    return 0;
}