//Program to print 1,3,5,7,9...N
#include <stdio.h>
int main()
{
    int number_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &number_of_terms);
    for(int i=1; i<=number_of_terms*2; i=i+2)
    {
        printf("%d ", i);
    }
}