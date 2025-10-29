//PROGRAM TO SORT (BUBBLE SORT) AN ARRAY. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n],i,j,temp;
    printf("Enter the values of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    //bubble sorting the array
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //printing sorted array
    printf("\nAfter sort: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]); 
    }

}