#include<stdio.h>
#include<string.h>
int main (){
    char a[100];
    printf("ENTER A STRING ");
    gets(a);
    for (int i = 0, j; a[i] != '\0'; ++i) {
        while (!(a[i] >= 'a' && a[i] <= 'z') && !(a[i] >= 'A' && a[i] <= 'Z') && !(a[i] == '\0')) {
         for (j = i; a[j] != '\0'; ++j) {
             a[j] = a[j + 1];
         }
         a[j] = '\0';
      }
    }
    printf("OUTPUT STRING : ");
    puts(a);
    return 0;
}