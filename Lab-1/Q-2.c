//lab2
//Write a program to calculate the percentage of five subjects.
#include<stdio.h>
int main()
{
	//Subject marks
	int marks1,marks2,marks3,marks4,marks5;
	float percentage;
	printf("Enter marks of subject 1: ");
	scanf("%d",&marks1);
	printf("Enter marks of subject 2: ");
	scanf("%d",&marks2);
	printf("Enter marks of subject 3: ");
	scanf("%d",&marks3);
	printf("Enter marks of subject 4: ");
	scanf("%d",&marks4);
	printf("Enter marks of subject 5: ");
	scanf("%d",&marks5);

	//percentage calculation = total marks/total subjects
	percentage=(marks1+marks2+marks3+marks4+marks5)/5;
	printf("The percentage of five subjects is: %f",percentage);
	return 0;
}