#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    int ans[9];
    int n=9;
    int idx = 0;
    for( int i=0;i<n;i++){
        if(arr[i]!=0){
            ans[idx]=arr[i];
            idx++;
        }
    } 
    while(idx!=n){
        ans[idx]=0;
        idx++;
    }
    printf("\n");
    printf("THE SORTED ARRAY IS : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",ans[i]);
    }
    return 0;
}