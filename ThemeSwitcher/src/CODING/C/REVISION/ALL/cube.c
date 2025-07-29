#include <stdio.h>
int main()
{
    int n, cube;
    printf("ENTER THE NUMBER OF TERMS : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf("THE CUBE OF %d IS %d \n", i, cube);
    }
    return 0;
}
