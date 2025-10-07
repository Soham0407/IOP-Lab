//Program to read two numbers and perform specific task(using arithmetic operator) and this perform using switch-case.
#include<stdio.h>
int main()
    {
        char operator;
        float num1, num2, result;
        printf("Enter an operator from +, -, *, /): ");
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
