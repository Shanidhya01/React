#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("file not created");
    }
    else
    {
        printf("file created");
    }
    return 0;
}
