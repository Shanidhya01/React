#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF ROWS/COLUMNS : ");
    scanf("%d", &n);
    printf("ENTER ALL THE  ELEMENTS \n");
    int arr[n][n];
    // INPUT
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    // TRANSPOSE
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
           int c= arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=c;
        }
    }
    //OUTPUT
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}