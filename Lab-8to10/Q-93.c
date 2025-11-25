//PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *p;
    int i,count=0;
    printf("Enter the string: ");
    gets(str);
    p=str;
    for(i=0; i<strlen(str); i++)
    {
        if(*p==' ' || *p==',' || *p=='.')
        {
            count++;
        }
        p++;
    }
    printf("Number of words in the given string: %d\n", count+1);
    return 0; 
}