//Program to read a character and check whether it is a small case letter or not using conditional operator.
#include<stdio.h>
int main()
{
    char character;
    int c;
    printf("Enter a character: ");
    scanf("%c",&character);
    c=(character>=97 && character<=122)?1:0;
    if(c==1)
    {
        printf("The entered character %c is a small case letter",character);
    }
    else
        printf("The entered character %c is not a small case letter",character);
    return 0;
}