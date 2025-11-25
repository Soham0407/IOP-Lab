//PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    char *p1, *p2;
    int len, i;
    printf("Enter the string: ");
    gets(str1);
    len = strlen(str1);
    p1 = str1 + len - 1; 
    p2 = str2;     
    // Copying in reverse order
    for(i = 0; i < len; i++)
    {
        *(p2 + i) = *p1; 
        p1--; 
    }
    *(p2 + len) = '\0'; // Null-terminate the reversed string
    printf("Reversed string: %s\n", str2);
    return 0;
}