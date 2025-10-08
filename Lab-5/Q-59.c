//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.
#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int swap[10];
    printf("Enter terms of 1st array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter terms of 2nd array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<10;i++)
    {
        swap[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=swap[i];
    }
    printf("1st array after swap is:");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n2nd array after swap is:");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}