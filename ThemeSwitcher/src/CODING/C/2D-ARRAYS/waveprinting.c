#include <stdio.h>
int main()
{
    int m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter matrix elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    j = 0;
    for(j=0;j<n;j++)
    {
        if(j%2!=0){
        /* Print odd columns */
          for (i = 0; i < m; i++){
               printf("%d ", matrix[i][j]);
           }
        }
        else
        {
            /* print even columns */
            for (i = m - 1; i >= 0; i--)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}