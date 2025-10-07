//lab7
//Write a program to calculate the area of a triangle when the lengths of all the three sides are given.
#include<stdio.h>
#include<math.h>
int main()
{
	float side1,side2,side3,area,semiperimeter;
	printf("Enter the first side: ");
	scanf("%f",&side1);
	printf("Enter the second side: ");
	scanf("%f",&side2);
	printf("Enter the third side: ");
	scanf("%f",&side3);
	
	//Area calculation using Heron's formula
	semiperimeter=(side1+side2+side3)/2;
	area=sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
	printf("%f",area);
	return 0;
}