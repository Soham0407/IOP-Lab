// program to find the length of a given string, both including and excluding spaces.
#include <stdio.h>
#include <string.h>
int main()
{
    char st[1000];
    int count=0;
    printf("Enter the string: ");
    gets(st);
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] != ' ') // increase count when character is not space
            count++;
    }
    printf("Length of string including space: %d\n", strlen(st));      
    printf("Length of string excluding space: %d", count);
}