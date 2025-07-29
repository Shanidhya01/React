#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");
    // fgetc() example
    char ch;
    ch = fgetc(fp);
    printf("%c", ch);
    // fgets() example
    char str[100];
    fgets(str, 100, fp);
    printf("%s", str);
    // fscanf() example
    fscanf(fp, "%s", str);
    printf("%s", str);
    return 0;
}
