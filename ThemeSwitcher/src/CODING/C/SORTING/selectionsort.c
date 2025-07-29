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
    //  selection  sort
    for(int i=0;i<n-1;i++){   
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<=n-1;j++){
            if(min > arr[j]){
                min = arr[j];
                minidx = j;
            }
        }
        //swap
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp; 
    }
    printf("\n");
    printf("THE SORTED ARRAY IS : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}