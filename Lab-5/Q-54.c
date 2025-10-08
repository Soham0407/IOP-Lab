//Program to read an array of 10 integer and print sum of numbers.
#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter 10 integer elements of array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of integers in array is %d",sum);
}
