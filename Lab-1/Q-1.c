//lab1 
//Write a program to calculate simple interest.
#include<stdio.h>
int main()
{
	float principal,rate,time,si;
	printf("Enter the principal amount: ");
	scanf("%f",&principal);
	printf("Enter the rate: ");
	scanf("%f",&rate);
	printf("Enter the time: ");
	scanf("%f",&time);
	si=principal*rate*time*0.01;
	printf("The simple interest is: %f",si);
	return 0;	
}