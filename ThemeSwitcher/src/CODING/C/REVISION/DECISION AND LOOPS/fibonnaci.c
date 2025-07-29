#include <stdio.h>
int main()
{
    int i, j, fibo1 = 0, fibo2 = 1, n;
    printf("the number till which  fibbonnaci series is to printed   : ");
    scanf("%d", &n);
    int nextfibo = fibo1 + fibo2;
    printf("%d\n%d\n",fibo1,fibo2);
    for (i = 3; i <= n; i++)
    {
        printf("%d\n", nextfibo);
        fibo1 = fibo2;
        fibo2 = nextfibo;
        nextfibo = fibo1 + fibo2;
    }
    
    return 0;
}