//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.  
#include<stdio.h>
int main()
{
    int n,search,i,count=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be counted ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        count++;
    }
    printf("The element %d occured %d times in array",search,count);
    return 0;
}