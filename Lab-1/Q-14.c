//lab14
//Program to check whether a given character is capital, letter, small case letter, a digit or a special symbol.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c>='A' && c<='Z')
    {
        printf("The character is a capital letter");
    }
    else if (c>='a' && c<='z')
    {
        printf("The character is a small case letter");
    }
    else if (c>='0' && c<='9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special symbol");
    }
    return 0;
}