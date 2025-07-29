#include <stdio.h>
#define SIZE 10 
void printArray(int arr[])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rotateArray(int arr[], int d)
{
    int temp[d]; 
    int i, j;
    for(i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for(i = 0; i < SIZE - d; i++)
    {
        arr[i] = arr[i + d];
    }
    for(i = SIZE - d, j = 0; i < SIZE; i++, j++)
    {
        arr[i] = temp[j];
    }
}

// Main function
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sample array
    int d = 5; // Number of positions to rotate

    printf("Original array: \n");
    printArray(arr);

    rotateArray(arr, d); // Rotate the array

    printf("\nRotated array: \n");
    printArray(arr);

    return 0;
}
