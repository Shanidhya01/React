#include<stdio.h>
int main (){
    int n;
    printf("Enter a number :  ");
    scanf("%d",&n);
    // int nst = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf("   ");
    //     }
    //     for(int j =1;j<=nst;j++){
    //         printf(" * ");        
    //     }
    //       nst = nst + 2;
    //     printf("\n");
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         printf("   ");
    //     }
    //      for(int j =1;j<=2*i-1;j++){
    //         printf(" * "); 
    //      }
    //     printf("\n");
    // }
    int nst=1;
    int nsp=n-1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("   ");
        }
        nsp=nsp-1;
         for(int j =1;j<=2*i-1;j++){
            printf(" * "); 
        }
        nst=nst+2;

        printf("\n");
    }
   return 0;
}