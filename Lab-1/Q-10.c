//lab10
//Program to calculate the cut off mark of a student.
#include<stdio.h>
int main()
{
    float CM,M,P,C,E;
    /*CM = Cut of mark 
    M = Marks in Mathematics out of 200 
    P = Marks in Physics out of 200 
    C = Marks in Chemistry out of 200 
    E = Marks in entrance examination out of 100*/
    printf("Enter marks in Mathematics out of 200: ");
    scanf("%f",&M);
    printf("Enter marks in Physics out of 200: ");
    scanf("%f",&P);
    printf("Enter marks in Chemistry out of 200: ");
    scanf("%f",&C);
    printf("Enter marks in entrance examination out of 100: ");
    scanf("%f",&E);
    CM=(M/2)+(P/2)+(C/2)+E;
    printf("The cut off mark of the student is: %f",CM);
    return 0;
}
