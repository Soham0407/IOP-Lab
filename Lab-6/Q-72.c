// Write a program in C to rotate an array by N positions.
#include <stdio.h>
int main()
{
    int n, rotate, i, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &rotate);
    for (int r = 0; r < rotate; r++)
    {
        temp = arr[0];
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Array after rotating left by %d positions:\n", rotate);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}