#include<stdio.h>
int stair(int n){
    if(n<=3) return n;
    // int totalways = stair(n-1) + stair(n-2);
     return stair(n-1) + stair(n-2) + stair(n-3);//totalways;
    }

int main (){
    int n;
    printf("ENTER  NUMBER OF STAIR  :   ");
    scanf("%d",&n);
    int ways  = stair(n);
    printf(" The number of ways %d\n",ways);
    return 0;
}