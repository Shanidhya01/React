#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, r1, r2, rpart, ipart;
    printf("ENTER THE NON ZERO CONSTANT OF QUADRATIC EUATINS a,b,c : ");
    scanf("%f  %f  %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("THE ROOTS ARE EQUAL AND REAL \n");
        r1 = -b / (2 * a);
        r2 = r1;
        printf("THE ROOTS ARE %f AND %f ", r1, r2);
    }
    else if (d > 0)
    {
        printf("THE ROOTS ARE DISTINCT AND REAL \n");
        r1 = ((-b) + sqrt(d)) / (2 * a);
        r2 = ((-b) - sqrt(d)) / (2 * a);
        printf("THE ROOTS ARE %f AND %f ", r1, r2);
    }
    else
    {
        printf("THE ROOTS ARE IMAGINARY \n ");
        rpart = -b / (2 * a);
        ipart = sqrt(fabs(d)) / (2 * a);
        printf("THE ROOT 1 IS %.2f + %.2f ", rpart, ipart);
        printf("THE ROOT 1 IS %.2f - %.2f ", rpart, ipart);
    }
    return 0;
}
