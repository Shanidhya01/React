#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 5;
    int n = 7;
    // steps
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    //  index 1-4 reverse

    for (int i = 0; i <= 7; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}