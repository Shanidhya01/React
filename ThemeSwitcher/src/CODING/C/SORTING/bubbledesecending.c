#include<stdio.h>
int main(){
    int true,false,bool,flag;
    int arr[5]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    //  bubble sort
    for(int i=0;i<n-1;i++){
        bool;flag = true;     
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int c = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
                flag = false;
            }
        }
        if(flag == true )  break;
    }
    printf("THE SORTED ARRAY IS : \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}