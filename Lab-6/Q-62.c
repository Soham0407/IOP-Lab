//PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array after reversing is: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}