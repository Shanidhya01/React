#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], i, j, m, n;
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
    printf("\n THE MATRIX A IS : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    // TRANSPOSE
    printf("\n THE TRANSPOSE MATRIX A IS : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}