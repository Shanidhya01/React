#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF ROWS/COLUMNS : ");
    scanf("%d", &n);
    printf("ENTER ALL THE  ELEMENTS \n");
    int arr[n][n];
    //input 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    //transpose
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
           int c= arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=c;
        }
    }
    printf("\n");
    //OUTPUT
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //ROTATE 
     for (int i = 0; i < n; i++){
        int j=0;
        int k=n-1;
        while(j<k){
            //swap arr[i][j] and arr[i][k]
            int c= arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=c;
            j++;
            k--;
        }
    }
    printf("\n");
    //OUTPUT
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}