#include<stdio.h>
int main(){
    int i ;
    int a[]={1,5,69,54,54};
    for(int i=0;i<5;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
    printf("%d",a[i]);
    return 0;
}