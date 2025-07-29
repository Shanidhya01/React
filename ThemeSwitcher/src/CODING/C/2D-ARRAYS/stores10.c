#include <stdio.h>
int main()
{
    char name[20];
    int n;
    float amount;
    printf("Enter the consumer name :\n");
    scanf("% s", name);
    printf("Enter no.of units consumed \n");
    scanf("% d", &n);
    if (n <= 200)
    {
        amount = n * 80;
    }
    else if (n > 200 && n <= 300)
    {
        amount = 200 * 80;
        amount = amount + (n - 200) * 90;
    }
    else
    {
         amount = (n - 300) * 100;
        amount = amount + 100 * 90;
         amount = amount + 200 * 80;
    }
    
   
    amount = amount / 100;
    amount = amount + 100;
    if (amount > 400)
    {
        amount = amount + amount * 15 / 100;
    }
    printf("Total amount to be paid is = % .2f Rs\n", amount);
    return 0;
}