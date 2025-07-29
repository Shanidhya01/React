#include<stdio.h>
int main(){
    // FILE* ptr = fopen("shanidhya.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }

    // creating file
    FILE* ptr = fopen("CW.txt","w");
    char str[] = "PLACEMENT lag gayi ";
    fputs(str,ptr);
    fclose(ptr);
}