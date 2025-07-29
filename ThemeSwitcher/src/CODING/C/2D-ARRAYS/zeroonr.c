#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
    int maxcount = 0;
    int maxidx = -1;
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        if (maxcount < count)
        {
            maxcount = count;
            maxidx = i;
        }
        printf("\n");
    }
    printf("\n %d \n", maxidx);
    return 0;
}