#include <stdio.h>
int main()
{
    int matrix[100][100];
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter matrix elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    j = 0;
    while (j < n)
    {
        /* Print odd columns */
        for (i = 0; i < m; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        /* increment for even columns */
        j++;
        if (j < n)
        {
            /* print even columns */
            for (i = m - 1; i >= 0; i--)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        j++;
    }

    return 0;
}