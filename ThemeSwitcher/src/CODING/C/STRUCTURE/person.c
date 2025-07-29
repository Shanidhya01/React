#include <stdio.h>
#include<string.h>
int main()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    } a , b;

    a.age = 30;
    strcpy(a.name , "RAM");
    a.salary = 50000;

    b.age = 26;
    strcpy(b.name,"Shyam");
    b.salary = 40000;

    printf("%s \n",a.name);
    printf("%d",b.age);
    
    return 0;
}