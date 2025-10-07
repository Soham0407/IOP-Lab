//Program to read three numbers and print maximum using the logical operator.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a, &b, &c);
    if(a>=b && a>=c)
        printf("The maximum number is: %d",a);
    else if(b>=a && b>=c)
        printf("The maimum number is: %d",b);
    else
        printf("The maximum number is: %d",c);
    return 0;
}