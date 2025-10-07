//Program to print 1,4,9,16,25...N.
#include <stdio.h>
int main()
{
    int number_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &number_of_terms);
    for(int i=1; i<=number_of_terms;i++)
    {
        printf("%d ", i*i);
    }
}