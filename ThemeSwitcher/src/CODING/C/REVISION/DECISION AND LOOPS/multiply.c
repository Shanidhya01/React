#include <stdio.h>
int main()
{
    int i, j, n;
    printf("the number whose to be printed  : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
       printf("%d * %d  = %d \n", n, i , n*i);
    }
    
    return 0;
}