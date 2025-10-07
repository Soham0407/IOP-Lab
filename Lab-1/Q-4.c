//lab4
//Write a program to convert temperature from Fahrenheit to Centigrade degree.
#include<stdio.h>
int main()
{
	//declaring variables for fahrenheit and centigrade degree
	float fahrenheit,centigrade_degree;
	printf("Enter temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	//Formula to convert fahrenheit to centigrade degree
	centigrade_degree=(fahrenheit*5-32*5)/9;
	printf("The temperature in centigrade degrees is: %f",centigrade_degree);
    return 0;
}