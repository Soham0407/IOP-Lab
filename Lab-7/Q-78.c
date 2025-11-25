// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>
int is_armstrong(int num)
{
    int number = num;
    int sum = 0;
    int digits = 0;  
    // Count number of digits
    int temp = num;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
            power = power*digit;
        sum = sum+power;
        temp = temp / 10;
    }
    if (number == sum)
        return 1; // Armstrong
    else
        return 0; // Not an Armstrong
}
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    printf("%d",is_armstrong(num)); 
    return 0; 
} 