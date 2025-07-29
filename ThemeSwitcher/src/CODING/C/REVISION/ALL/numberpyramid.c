// #include <stdio.h>
// int main()
// {
//     int i, j, spc, n, k, t = 1;
//     printf("Input number of lines : ");
//     scanf("%d", &n);
//     spc = n;
//     for (i = 1; i <= n; i++)
//     {
//         for (k = spc; k >= 1; k--)
//         {
//             printf("  ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf(" %d ", t++);
//         }
//         printf("\n");
//         spc--;
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter  number  of rows : ");
    scanf("%d",&n);
    int a= n;
    for(int i=1;i<=n;i++){ 
        for (int j =1; j <= (n - i) ; j++) { 
			printf("   "); 
		} 
      for(int j=1 ;j<=2*i-1;j++){
        printf(" %d ",j);
      }
       printf("\n");
    }
  return 0;
}