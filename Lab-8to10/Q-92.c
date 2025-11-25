//PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, biggest;
    int *p;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    p = arr;
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    biggest = *p; 
    for(i = 1; i < n; i++)
    {
        if(*(p + i) > biggest)
        {
            biggest = *(p + i);
        }
    }
    printf("The biggest number is: %d\n", biggest);
    return 0;   
}