#include <stdio.h>
int main(){
    int r, c;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMN : ");
    scanf("%d", &c);
    printf("ENTER ELEMENTS :  \n");
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
    int sum =0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("\nSum of two matrices: %d \n",sum);
    return 0;
}