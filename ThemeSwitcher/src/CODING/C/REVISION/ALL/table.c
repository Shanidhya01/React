#include <stdio.h>
int main()
{
    int n, cube;
    printf("ENTER THE NUMBER OF WHICH YOU WANT TABLE : \n");
    scanf("%d", &n);
    printf("THE TABLE OF %d is \n",n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
