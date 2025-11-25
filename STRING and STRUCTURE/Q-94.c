//program to copy a string into another string in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000], rev[1000];
    printf("Enter the string: ");
    gets(str);
    for(int i=0; i<strlen(str); i++) 
    {
        rev[i]=str[strlen(str)-i-1];
    }

    printf("Reverse string: ");
    puts(rev);
}