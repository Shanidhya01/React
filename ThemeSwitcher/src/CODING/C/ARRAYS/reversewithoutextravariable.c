#include <stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 7;
    // for(int i=0,j=7;i<j;i++,j--)
    while (i < j)
    {
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr);
    for (int i = 0; i <= 7; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}