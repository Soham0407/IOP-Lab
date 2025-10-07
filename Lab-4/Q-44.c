//Program to print the amount to be paid by the consumer
#include<stdio.h>
int main()
{
    float unit,charge;
    printf("Enter the units consumed: ");
    scanf("%f",&unit);
    if(unit>=0 && unit<=200)
    {
        charge= 0.5*unit; //calculating charge for unit consumed<=200
        printf("%f",charge);
    }
    else if(unit>=201 && unit<=400)
    {
        charge= 100 + 0.65*(unit-200); //calculating charge for unit>=201 and unit<=400
        printf("%f",charge);
    }
    else if(unit>=401 && unit<=600)
    {
        charge = 230 + 0.8*(unit-400); //calculating charge for unit>=201 and unit<=400
        printf("%f",charge);
    }
    else if(unit>600)
    {
        charge = 425 + 1.25*(unit-600); //calculating charge for unit>600
        printf("%f",charge);
    }
    else
    printf("Enter valid input");
}