#include<stdio.h>
int main(){
    char str[]="hello!";
    // char arr[]={'h','e','l','l','o','!'};
    // str[1] = 99;
    int i = 0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        // printf("\n");
        // printf("%c ",i[str]);
        // printf("\n");
        // printf("%c ",*(str + i));
        // printf("\n");
        // printf("%c ",*(i + str));
         i++;
    }
    return 0;
}