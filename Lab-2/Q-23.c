//Program to read to numbers and calculate power without using header file(<math.h)
#include<stdio.h>
int main()
{
    float base,power,result;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter power: ");
    scanf("%f",&power);
    result=1;
    for(int i=1;i<=power;i++){
        result=result*base;
    }
    printf("Result of base raised to power is %f",result);
    return 0;
}