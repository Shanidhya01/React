#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Book
    {
        char name[60];
        float price;
        int noOfpages;
    } Book;

    Book d;
    Book a;
    Book b;
    Book c;

    a.noOfpages = 200;
    a.price = 100.60;
    strcpy(a.name, "Secret Seven");

    b.noOfpages = 100;
    b.price = 411.5;
    strcpy(b.name, "Famous Five");

    printf("%d\n", a.noOfpages);
    printf("%s\n", a.name);
    printf("%f\n", a.price);

    printf("\nBook B\n");

    printf("%d\n", b.noOfpages);
    printf("%s\n", b.name);
    printf("%f\n", b.price);
    return 0;
}