#include <stdio.h>
#include <math.h>
int convert(long long oct)
{
    int dec = 0, i = 0, bin = 0;
    while (oct != 0)
    {
        dec += (oct % 8) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;
    while (dec != 0)
    {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
int main()
{
    long long oct;
    printf("Enter a octal number: ");
    scanf("%lld", &oct);
    printf("%lld in octal = %d in binary", oct, convert(oct));
    return 0;
}