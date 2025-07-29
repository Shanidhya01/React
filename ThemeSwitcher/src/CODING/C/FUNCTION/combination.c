#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
     fact = fact*i;
    }
     return fact;
}
int combination(int n , int r){
 int ncr = factorial(n)/(factorial(r)*factorial(n-r));
 return ncr;
}
int main(){
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);
    int r;
    printf("ENTER r : ");
    scanf("%d",&r);
    // for(int i=2;i<=n;i++){
    //     nfact = nfact*i;
    // }
    // for(int i=2;i<=r;i++){
    //     rfact = rfact*i;
    // }
    // for(int i=2;i<=n-r;i++){
    //     nrfact = nrfact*i;
    // }
    int ncr= combination(n,r);
    printf("%d",ncr);
    return 0;
}