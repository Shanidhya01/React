#include <stdio.h>
#include<limits.h>
int main(){
    int r, c;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMN : ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("enter element : ");
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++){
         for (int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (min > arr[i][j]){
              min = arr[i][j];
            }
           if (max < arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("\nMin of two matrices: %d  \n",min);
    printf("\nMax of two matrices: %d  \n",max);
    return 0;
}