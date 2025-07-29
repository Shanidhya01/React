#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], i, j, m, n, p, q,k;
    printf("Enter the number of rows and column of 1 st matrix: ");
    scanf("%d  %d", &m, &n);
    printf("Enter the number of rows and columns of 2nd matrix: ");
    scanf("%d  %d", &p, &q);
    if (n != p)
    {
        printf("MATRIX MULTIPLICATION IS NOT POSSIBLE \n");
    }
    else
    {
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
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        printf("The resnt matrix C is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("% d ", c[i][j]);
            printf("\n");
        }
    }
    return 0;
}