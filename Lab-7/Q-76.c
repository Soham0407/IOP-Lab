// FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD. 
#include <stdio.h>
int even_or_odd(int num)
{
    if (num%2==0)
        return 0; // Even
    else
        return 1; // Odd
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (even_or_odd(num)==0)
        printf("%d is even\n",num);
    else
        printf("%d is odd\n",num);
    return 0;
}