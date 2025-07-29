#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "College";
    printf("%s\n", str);
    // 2nd index par l
    for (int i = 6; i >= 3; i--)
    {
        str[i + 1] = str[i];
    }
    str[2] = 'k';
    printf("%s\n", str);
    return 0;
}