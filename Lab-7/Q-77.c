//FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT. 
#include <stdio.h>
int is_palindrome(int num)
{
    int original = num;
    int reverse = 0;
    
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse*10+digit;
        num =num/10;
    }
    
    if (original == reverse)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    printf("%d",is_palindrome(num)); 
    return 0; 
}