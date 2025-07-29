#include<stdio.h>
int main(){
    char arr[]={'h','e','l','l','o','!'};
    // char ch ='\0'; //null character
    // int x=0;
    // char a=(char)x;
    // printf("%c",ch);
    int i = 0;
    while(arr[i]!='!'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}