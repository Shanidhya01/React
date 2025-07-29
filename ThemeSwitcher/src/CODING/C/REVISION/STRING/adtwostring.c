#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100], c[100];
    int i = 0, j = 0, count = 0;
    // READING OF STRINGS a AND b
    printf("Enter the String 1\n");
    gets(a);
    printf("Enter the String 2\n");
    gets(b);
    // // COPY STRING a TO c
    // while (a[i] != '\0')
    // {
    //     c[count] = a[i];
    //     count++;
    //     i++;
    // }
    // // INSERT BLANK SPACE BETWEEN a AND b
    // c[count++] = ' ';
    // // COPY STRING b TO c FROM THE LOCATION COUNT
    // while (b[j] != '\0')
    // {
    //     c[count] = b[j];
    //     count++;
    //     j++;
    // }
    // // END OF STRING
    // c[count] = '\0';
    // // PRINTING OF STRINGS a, b, c
    // printf("\n String a =\n");
    // puts(a);
    // printf("\n String b =\n");
    // puts(b);
    // printf("\n String c =\n");
    // puts(c);
    printf(" %s",strcat(a,b));
    return 0;
}
