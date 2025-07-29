#include<stdio.h>
#include<limits.h>
int main(){
    int true,false,bool,flag;
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
    printf("Unsorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    //  inserting  sort
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j] < arr[j-1]){
            int c = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = c;
            j--;
        }
    }
    printf("\n");
    printf("THE SORTED ARRAY IS : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}