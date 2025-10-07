//Program to find maximum and minimum from N numbers.
#include<stdio.h>
int main()
{
    int n,max,min;            
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)      
        {
            max=arr[i];
        }
        if(arr[i]<min)     
        {
            min=arr[i];
        }
    }
    printf("The maximum of the following is %d\n",max);
    printf("The minimum of the following is %d",min);
    return 0;
}