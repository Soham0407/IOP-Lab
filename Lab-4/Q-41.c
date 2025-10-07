//READ A NUMBER N AND PRINT FACTOR OF N.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The factors of %d are: ", number);
    for(int i=1; i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d,", i);
        }
    }
}