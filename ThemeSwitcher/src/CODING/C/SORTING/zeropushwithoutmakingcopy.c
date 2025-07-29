#include <stdio.h>
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n = 9;
    printf("Unsorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] == 0)
            {
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    printf("\n");
    printf("THE SORTED ARRAY IS : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}