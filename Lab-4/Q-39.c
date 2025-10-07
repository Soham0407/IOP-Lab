//Program to print 1/1!+2/2!+3/3!+4/4!,………N.
#include <stdio.h>
int main()
{
    int number_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &number_of_terms);
    float sum=0;
    for(int i=1; i<=number_of_terms;i++)
    {
        float factorial=1;
        for(int j=1;j<=i;j++)
        {
            factorial=factorial*j;
        }
        sum=sum+i/factorial;
    }
    printf("The sum is: %f",sum);
    return 0;
}