//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY. 
#include<stdio.h>
int main()
{
    int n,search,i,flag=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        flag=1;
    }
    if(flag==1)
    printf("The element %d you entered is present",search);
    else
    printf("The element %d you entered is not present",search);

    return 0;
}