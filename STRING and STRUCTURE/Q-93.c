//program to count the number of words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i, sp=0;
    printf("Enter the sentence: ");
    gets(ch);
    for(i=0; i<strlen(ch); i++)
    {
        if(ch[i]==' ' || ch[i]=='.'||ch[i]==','|| ch[i]=='!'|| ch[i]=='?') 
        {
            sp++;
        }
    }
    printf("Total words= %d", (sp+1)); 
    return 0;
}