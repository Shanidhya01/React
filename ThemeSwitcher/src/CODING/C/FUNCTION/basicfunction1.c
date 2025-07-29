#include<stdio.h>
void england(){
    printf("YOU ARE IN ENGLAND \n");
    return;
}
void australia(){
    printf("YOU ARE IN AUSTRALIA \n");
    england();
    return;
}
void india(){
    printf("YOU ARE IN INDIA  \n");
    australia();
    return;
}
int main (){
    india();
    return 0;
}