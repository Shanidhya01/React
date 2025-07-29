// #include <stdio.h>
// int remove_occurance(int *array, int n, int val)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] != val)
//         {
//             printf("%d ", array[i]);
//         }
//     }
// }
// int main()
// {
//     int array[9] = {1, 2, 5, 8, 7, 8, 9, 6, 5}, value = 8, size = 9;
//     remove_occurance(array, size, value);
//     return 0;
// }

/*  WITHOUT USING FUNCTION */
#include <stdio.h>
int main()
{
    int array[9] = {1, 2, 1, 8, 9, 3, 4, 5, 63}, size = 9, value = 1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] != value)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}