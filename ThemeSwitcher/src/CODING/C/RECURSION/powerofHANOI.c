#include <stdio.h>    
void disc(int n, char s, char h , char d)
{
    if(n==0)  return ;
    disc(n-1,s,d,h);
    printf("%c -> %c\n" ,s,d);
    disc(n-1,h,s,d);
   return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    disc(n, 'A','B','C');

    return 0;
}