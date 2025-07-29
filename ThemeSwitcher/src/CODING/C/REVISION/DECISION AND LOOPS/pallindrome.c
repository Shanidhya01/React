#include <stdio.h>
int main()
{
    int n, rev = 0, digit, temp;
    printf("ENTER A NUMBER  : \n");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("the given number is : %d  \n", temp);
    printf("the reverse number is : %d \n", rev);
    if (temp == rev)
        printf("the number  %d is pallindrome");
    else
        printf("the number %d is not  pallindrome");
    return 0;
}
