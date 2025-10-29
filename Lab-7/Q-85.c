// FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include <stdio.h>
void IsVowel(char ch)
{
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("%c is a vowel\n", ch);
    else
        printf("%c is a consonant\n", ch);
}
int main() 
{ 
    char c; 
    printf("Enter a character: "); 
    scanf(" %c", &c); 
    IsVowel(c); 
    return 0; 
}