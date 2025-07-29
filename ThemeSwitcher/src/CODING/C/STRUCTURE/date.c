#include<stdio.h>
#include<string.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date ;
    date a,b,c;
    //a -> 5/12/1999
    //b -> 19/1/2023
    a.day = 5;
    a.month= 12;
    a.year = 1999;

    b.day=19;
    b.month=1;
    b.year=2023;

    if(a.day==b.day  && a.month==b.month  && a.year==b.year) printf("THE DATES ARE SAME");
    else printf("THE DATES ARE DIFFERENT");

    printf("\n\n");

    c=a;
    if(a.day==c.day  && a.month==c.month  && a.year==c.year) printf("THE DATES ARE SAME");
    else printf("THE DATES ARE DIFFERENT");

    return 0;
}