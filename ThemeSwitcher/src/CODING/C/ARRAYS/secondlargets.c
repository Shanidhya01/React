#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 6, 6, 4, 2, 1};
    int max = INT_MIN; // sabse chotta number
    int smax = INT_MIN;
    // for (int i = 0; i <= 7; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i <= 7; i++)
    // {
    //     if (arr[i]!=max  && smax < arr[i])
    //     {
    //         smax = arr[i];
    //     }
    // }
    for (int i = 0; i <= 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is now previous max
            max = arr[i]; // max is now A new max
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("the second largest number is  %d", smax);
    return 0;
}