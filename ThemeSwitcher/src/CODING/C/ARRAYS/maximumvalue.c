#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY  :  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("          \n    %d", max);
    return 0;
}