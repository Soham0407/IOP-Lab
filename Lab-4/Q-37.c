//Program to print 2,4,6,8,10,12...N.
#include <stdio.h>
int main()
{
    int number_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &number_of_terms);
    for(int i=2; i<=number_of_terms*2; i=i+2)
    {
        printf("%d ", i);
    }
}