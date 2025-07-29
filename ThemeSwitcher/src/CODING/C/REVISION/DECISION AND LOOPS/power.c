#include <stdio.h>
#include <math.h>
int main()
{
    int d, a, b;
    printf("ENTER THE BASE  : ");
    scanf("%d", &a);
    printf("ENTER THE power  : ");
    scanf("%d", &b);
    d = pow(a, b);
    printf(" %d raised to the power %d is %d ", a, b, d);
    return 0;
}