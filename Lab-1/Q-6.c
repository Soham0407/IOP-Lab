//lab6
//Write a program to swap two numbers without using third variable.
#include<stdio.h>
int main()
{   
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    printf("The numbers before swapping were %d and %d",a,b);

    //Operations to swap two numbers without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe numbers after swapping without third variable are %d and %d",a,b);
    return 0;
}