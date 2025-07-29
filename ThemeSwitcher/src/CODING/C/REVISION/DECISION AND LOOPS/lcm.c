#include <stdio.h>
int main()
{
    int n1, n2, lcm;
    printf("ENETR BOTH THE NUMBERS : \n");
    scanf("%d %d", &n1, &n2);
    int p=n1;
    int q=n2;
    while(n2!=0){
        int r =n1%n2;
        n1=n2;
        n2=r;
    }
    lcm = (p*q)/n1;
    printf("LCM OF %d AND %d is %d ", n2,n1, lcm);
    return 0;
}