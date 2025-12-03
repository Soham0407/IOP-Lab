// PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
#include<stdio.h>
int main()
{
    #define MACRO(a, b) ((a) > (b) ? (a) : (b))
    int num1, num2, biggest;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    biggest = MACRO(num1, num2);
    printf("The biggest number is: %d\n", biggest);
    return 0;
}