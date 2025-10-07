//lab3
//Write a program to calculate gross salary.
#include<stdio.h>
int main()
{
	int gross_salary,basic_salary,bonus,perquisites,other_allowances;
	printf("Enter the basic salary: ");
	scanf("%d",&basic_salary);
	printf("Enter the bonus: ");
	scanf("%d",&bonus);
	printf("Enter the perquisites: ");
	scanf("%d",&perquisites);
	printf("Enter any other allowances: ");
	scanf("%d",&other_allowances);
	
	//gross salary calculation = basic salary + bonus + perquisites + other allowances
	gross_salary=basic_salary+other_allowances+perquisites+bonus;
	printf("The gross salary is: %d",gross_salary);
    return 0;
}