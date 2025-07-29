#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], sum[100][100], i, j, m, n;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &m);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &n);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("\nthe resnt matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}