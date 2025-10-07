//Program to findout max and second max from N numbers.
#include <stdio.h>
int main()
{
    int n, max1,max2; 
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the terms\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = arr[0];
    max2 = arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max1) 
        {
            max2 = max1;
            max1 = arr[i];
        }
    }
    printf("The maximum number is %d\n", max1);
    printf("The second maximum number is %d", max2);
    return 0;
}
