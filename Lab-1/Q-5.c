//lab5
//Write a program to swap two numbers using third variable.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter another number: ");
	scanf("%d",&b);
	printf("The numbers before swapping were %d and %d",a,b);
	
	//Operations to swap two numbers
	c=a;
	a=b;
	b=c;
	printf("\nThe numbers after swapping are %d and %d",a,b);
    return 0;
}