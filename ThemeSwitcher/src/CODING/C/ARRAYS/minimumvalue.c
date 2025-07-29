#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ARRAYS :  ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER THE %d NUMBER :  ", i);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    // int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("          \n    %d", min);
    return 0;
}