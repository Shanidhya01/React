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
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumeven += arr[i];
        }
    }
        printf("THE EVEN INDEX SUM IS   :  %d  \n", sumeven);
    for (int i = 0; i < n; i++){
        if (i % 2 != 0)
        {
            sumodd += arr[i];
        }
    }
    printf("THE ODD INDEX SUM IS  : %d   \n", sumodd);
    printf(" THE SUM OF EVEN INDEX - SUM OF ODD INDEX :  %d", sumeven - sumodd);
    return 0;
}