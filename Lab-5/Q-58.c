//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD. 
#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int sum[10];
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
        sum[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",sum[i]);
    }
    return 0;
}