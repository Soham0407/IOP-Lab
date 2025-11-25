//PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include<stdio.h>
int main()
{
    int num, square, cube;
    int *p;
    printf("Enter a number: ");
    scanf("%d", &num);
    p = &num;
    square = *p * *p;
    cube = *p * *p * *p;
    printf("Square of %d is: %d\n", num, square);
    printf("Cube of %d is: %d\n", num, cube);
}