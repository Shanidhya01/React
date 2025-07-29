#include <stdio.h>
void greet(int n)
{
    if (n == 0)
        return;
    printf("GOOD MORNING\n");
    greet(n - 1);
    return;
}

int main()
{
    int n;
    printf("ENTER  A  NUMBER  :   ");
    scanf("%d", &n);
    greet(n);
    return 0;
}