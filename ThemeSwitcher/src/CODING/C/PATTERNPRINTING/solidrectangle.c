#include<stdio.h>
int main(){
    int n;
    printf("Enter  number  of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of column : ");
    scanf("%d",&m);
    //***********.....upton no of stars
    for(int i=1;i<=n;i++){ //outer loop = no of lines/rows
       for(int i =1 ;i<=m;i++){//inner loop = no of star/column
        printf("*");
       }
       printf("\n");//har line ke baad ek enter 
    }
  return 0;
}