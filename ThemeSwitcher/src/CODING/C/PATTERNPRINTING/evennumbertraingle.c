#include<stdio.h>
int main(){
    int n;
    printf("Enter  number  of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        int a = 2;
        for(int j=1;j<=i;j++){
            printf("%d    ",a);
            a =a +2;
        }
        printf("\n");
    }
  return 0;
}

// output
// 2    
// 2    4    
// 2    4    6    
// 2    4    6    8    
// 2    4    6    8    10  