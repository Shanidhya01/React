#include<stdio.h>
int main(){
    int n;
    printf("Enter  number  of rows : ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        if(i%2!=0) {
            a=1;
        }
        else {
             a++;
        }
       for(int j=1 ;j<=i;j++){
        
        printf("%d  ",a);
       }
      
       printf("\n");
    }
  return 0;
}