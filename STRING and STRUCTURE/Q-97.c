// program to count the number of vowels in a given string.
#include <stdio.h>
int main()
{
    char st[30];
    int i, count = 0;
    printf("Enter string: ");
    gets(st);
    i = 0;
    while (st[i] != '\0')
    {
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' ||
           st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U')
        {
            count++;
        }
        i++;
    }
    printf("Count: %d", count);
}