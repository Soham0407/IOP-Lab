//lab15
//Program to read marks of five subjects and print division.
#include<stdio.h>
int main()
{
    float subject1, subject2, subject3, subject4, subject5, percentage;
    printf("Enter marks of subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks of subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks of subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks of subject 5: ");
    scanf("%f", &subject5);
    percentage =(subject1 + subject2 + subject3 + subject4 + subject5)/5;
    printf("Percentage obtained= %f\n",percentage);
    if(percentage >= 60)
        printf("Division: First Division");
    else if(percentage >= 50)
        printf("Division: Second Division");
    else if(percentage >= 40)
        printf("Division: Third Division");
    else
        printf("Division: Fail");
    return 0;    
}