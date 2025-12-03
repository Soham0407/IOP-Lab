// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS
#include <stdio.h>
#include<math.h>
int flip(int number, int n) 
{
    int power = pow(10, n);

    int last_n_digits = number % power;
    int flipped_digits = 0;

    // Flip the last n digits
    for (int i = 0; i < n; i++) {
        flipped_digits = flipped_digits * 10 + (last_n_digits % 10);
        last_n_digits = last_n_digits/10;
    }

    // Combine the flipped digits with the rest of the number
    int result = (number / power) * power + flipped_digits;
    return result;
}
int main() 
{
    int number, n;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);
    int flipped_number = flip(number, n);
    printf("Number after flipping last %d digits: %d\n", n, flipped_number);
    return 0;
}   