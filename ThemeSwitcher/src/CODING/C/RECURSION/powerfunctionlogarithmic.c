#include<stdio.h>
int powerlog(int a, int b) {
    if ( b==0)    return 1;
    if ( b==1)    return a;
     int x = powerlog(a,b/2);
    if(b%2==0)  return  x*x;
    
    else    return  x * x * a; 
    }
int main (){
    int a;
    printf("ENTER  BASE :   ");
    scanf("%d",&a);
    int b;
    printf("ENTER  POWER :   ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to power %d is %d\n",a,b,p);
    return 0;
}