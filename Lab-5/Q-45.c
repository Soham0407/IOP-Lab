#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, luckyNumber, attempts = 3; // get random number generator
    srand(time(0));
    // Generate lucky number between 1 and 100
    luckyNumber = rand() % 100 + 1;
    printf("Welcome to the Guessing Game!\n");
    printf("You have %d attempts to guess the lucky number (between 1 and 100).\n\n", attempts);
    for (int i = 1; i <= attempts; i++)
    {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);
        if (guess == luckyNumber)
        {
            printf("You guessed the lucky number!\n");
            break;
        }
        else if (guess < luckyNumber)
        {
            printf("Try a higher number.\n\n");
        }  
        else
        {
            printf("Try a lower number.\n\n");
        }
        if (i == attempts)
        {
        printf("Out of attempts! The lucky number was %d.\n",luckyNumber);
        }
    }
    return 0;
}
