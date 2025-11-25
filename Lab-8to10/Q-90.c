//PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.
#include<stdio.h>
int main()
{
    char str[100],*p;
    int len_include_space=0,len_notinclude_space=0;
    printf("Enter a string: ");
    gets(str);
    p=str;
    while(*p!='\0')
    {
        len_include_space++;
        if(*p!=' ')
        {
            len_notinclude_space++;
        }
        p++;
    }
    printf("Length of the string including spaces: %d\n",len_include_space);
    printf("Length of the string excluding spaces: %d\n",len_notinclude_space);
}