#include <stdio.h>
int main()
{
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter matrix elements: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    printf("\n");
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (count < tne)
    {
        // print min row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne)  break;
        // print the max column
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne)  break;
        // print max rows
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne)  break;
        // print min column
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne)  break;
    }

    return 0;
}