#include<stdio.h>
#include<string.h>
int main(){ 
    char str[40] ;
    // gets(str);
    scanf("%[^\n]s",str);
    printf("%s \n",str);
    // printf("%s ",str);
    puts(str);
    return 0;
}