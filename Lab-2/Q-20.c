//Program to work like a simple calculator using switch-case.
#include<stdio.h>
int main()
    {
        char operator;
        float num1, num2, result;
        printf("Enter an operator from +, -, *, /: ");
        scanf("%c", &operator);
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch(operator)
        {
            case '+':
                result=num1 + num2;
                printf("%f + %f = %f", num1, num2, result);
                break;
            
            case '-':
                result=num1 - num2;
                printf("%f - %f = %f", num1, num2, result);
                break;

            case '*':
                result=num1 * num2;
                printf("%f * %f = %f", num1, num2, result);
                break;
            
            case '/':
                result=num1 / num2;
                printf("%f / %f = %f", num1, num2, result);
                break;
        }
       
    }
