// Given are one dimensional arrays A and B which are sorted in ascending order. 
//Program to merge them into a single sorted array C in ascending order. 
#include <stdio.h>  
int main() 
{ 
    int n1, n2; 
    printf("Enter size of first sorted array: "); 
    scanf("%d", &n1); 
 
    printf("Enter size of second sorted array: "); 
    scanf("%d", &n2); 

    int a[n1], b[n2], c[n1 + n2]; 
    int i = 0, j = 0, k = 0; 
  
    printf("Enter %d sorted elements for first array:\n", n1); 
    for (int x = 0; x < n1; x++) 
    { 
        scanf("%d", &a[x]); 
    } 

    printf("Enter %d sorted elements for second array:\n", n2); 
    for (int x = 0; x < n2; x++) 
    { 
        scanf("%d", &b[x]); 
    } 
 
    // Merge 
    while (i < n1 && j < n2) 
    { 
        if (a[i] <= b[j]) 
        { 
            c[k++] = a[i++]; 
        } 
        else 
        { 
            c[k++] = b[j++];
        } 
    } 
 
    // Add any remaining elements 
    while (i < n1) 
    { 
        c[k++] = a[i++]; 
    } 
 
    while (j < n2) 
    { 
        c[k++] = b[j++]; 
    } 
 
    printf("Merged sorted array:\n"); 
    for (int x = 0; x < k; x++) 
    { 
        printf("%d ", c[x]); 
    } 
 
    return 0; 
}