//Program to read three numbers and print maximum using conditional operator(? :).
#include<stdio.h>
int main()
{
    //takinng input of three numbers a,b and c.
    int a,b,c,max;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a, &b, &c);
    max=(a>b?(a>c?a:c):(b>c?b:c));
    printf("the maximum of three numbers= %d",max);
    return 0;
}