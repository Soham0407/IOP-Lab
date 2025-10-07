//lab12
//Program to print ASCII value of any character.
#include<stdio.h>
int main()
{
    //Taking input whose ASCII value is to be printed.
    char input;
    printf("Enter a character: ");
    scanf("%c",&input);
    printf("The ASCII value of %c is %d",input,input);
    return 0;
}
