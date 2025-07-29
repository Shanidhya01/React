#include <stdio.h>
int main()
{
    // int arr[5]={1,2,3,4,5};
    int n;
    printf("ENTER THE SIZE OF ARRAY  :  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}