#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        int a=i+1;
        printf("ENTER ELEMENT no %d ",i);
        scanf("%d \n",&arr[i]);
    }
    for(int i=0;i<=4;i++){
      printf("%d\n",arr[i]);
    
    }
    // float a[3] = {1.2,2.3,5.0};
    // printf("%f",a[2]);
    return 0;

}