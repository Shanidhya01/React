#include <stdio.h>
#include <string.h>
int main()
{
    int arr[11]={6,1,7,3,2,5,4,8,9,9,10};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<11;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate at %d position \n",arr[i],i+1);
                break;
            }
        }
    }
    return 0;
}