#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], ch;
    int count = 0;
    printf("ENTER THE STRING : \n");
    gets(str);
    printf("ENTER THE CHARCTER TO SEARCH IN THE STRING : ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            count++;
    }
    printf("THE FREQUENCY OF %c = %d ", ch, count);
    return 0;
}