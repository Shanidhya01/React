#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} d1, d2, result;
int main()
{
    printf("ENTER 1ST DISTANCE \n");
    printf("ENTER FEET :  \n");
    scanf("%d", &d1.feet);
    printf("ENTER INCH :  \n");
    scanf("%f", &d1.inch);
    printf("ENTER 2nd DISTANCE \n");
    printf("ENTER FEET :  \n");
    scanf("%d", &d2.feet);
    printf("ENTER INCH :  \n");
    scanf("%f", &d2.inch);
    // adding
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    // inch to feet
    if (result.inch >= 12)
    {
        result.inch = result.inch / 12;
        result.feet++;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
    return 0;
}