//Program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int factorial = 1;
    for(int i=1; i<=number;i++)
    {
        factorial = factorial*i;
    }
    printf("Factorial of %d is %d", number, factorial);

    return 0;  
}
