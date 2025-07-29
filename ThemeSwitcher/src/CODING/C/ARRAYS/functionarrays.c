#include <stdio.h>
void fun(int x[])
{
    int c = x[0];
    x[0] = x[1];
    x[1] = c;
    return;
}
int main()
{
    int arr[5] = {
        1,
        2,
    };
    printf("%d %d \n", arr[0], arr[1]);
    fun(arr);
    printf("%d %d \n", arr[0], arr[1]);
    return 0;
}