#include<stdio.h>
#include<string.h>
int main(){
    char* s1 = "Physics Wallah";
    // char* s2 =s1;  //s2 is a shallow copy
    // s1[0]= 'M';
    // printf("%s",s2);
    //deep copy->
    char* s2;
    s2=s1;
    s2="College Wallah";
    // s2[0]='M';
    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}