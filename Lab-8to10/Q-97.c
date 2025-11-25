//PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER. 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *p;
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    p = str;
    while(*p != '\0')
    {
        if(*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' ||
           *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            count++;
        }
        p++;
    }
    printf("Number of vowels in the given string: %d\n", count);
    return 0;
}