//PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n],i,j;
    printf("Enter the values of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    //printing the original array
    printf("array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    //sorting the array
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //printing the sorted array
    printf("\nAfter sort: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]); 
    }

}