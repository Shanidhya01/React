#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int i = 0, j = 0, count = 0;
    // READING OF STRINGS a AND b
    printf("Enter the String 1\n");
    gets(a);
    // while (a[i] != '\0')
    // {
    //     b[count] = a[i];
    //     count++;
    //     i++;
    // }
    // printf("the string b is : \n");
    // puts(b);
    printf("%s",strcpy(b,a));
    return 0 ;
}