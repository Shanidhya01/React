#include <stdio.h>
#include <malloc.h>

int main(void)
{

    int A[5], B[8], i, j, s = 1;
    int *c;
    c = (int *)malloc(s * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        printf("ENTER THE ELEMENTS OF A : ");
        scanf("\t %d", &A[i]);
    }

    printf("\n");

    for (j = 0; j < 8; j++)
    {
        printf("ENTER THE ELEMENTS OF B : ");
        scanf("\t %d", &B[j]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (A[i] == B[j])
            {
                c[i] = A[i];
                s++;
                printf("\n common elements are  %d\n", c[i]);
                c = realloc(c, s * sizeof(int));
                break;
            }
        }
    }

    return 0;
}