// FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM. 
#include <stdio.h>
int Max(int arr[], int n) 
{ 
    int max = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
    return max; 
}
int main() 
{ 
    int n; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter elements: "); 
    for (int i=0;i<n;i++) 
        scanf("%d",&arr[i]); 
    printf("Maximum = %d", Max(arr, n)); 
    return 0; 
}