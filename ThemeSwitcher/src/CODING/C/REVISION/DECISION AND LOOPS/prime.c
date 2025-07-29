#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("ENTER A NUMBER : \n");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf(" %d is a prime number \n", n);
    else
        printf(" %d is a composite  number ", n);
    return 0;
}