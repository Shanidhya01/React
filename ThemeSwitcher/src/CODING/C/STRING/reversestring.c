#include<stdio.h>
#include<string.h>
int main (){
    char str[40];
    puts("ENTER A STRING");
    gets(str);
    // puts("The size of is : ");//automatically enter
    //size
    int size =0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char c=str[i];
        str[i]=str[j];
        str[j]=c;
    }

    puts("The reverse string is : ");
    puts(str);
    return 0;
}