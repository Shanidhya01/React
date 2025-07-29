#include <stdio.h>
#include <string.h>
int main()
{
    int i, length = 0;
    char a[100];
    printf("ENTER A STRING :  \n");
    gets(a);
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     length = length + 1;
    // }
    // printf("THE LENGTH OF STRING Is %d ", length);
    printf("THE LENGTH OF STRING Is %d ", strlen(a));
    return 0;
}