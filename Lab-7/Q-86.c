// FUNCTION TO READ LINE OF TEXT AND FIND OUT  LENGTH OF STRING.
#include <stdio.h>
int str_Len(char str[]) 
{ 
    int length = 0; 
    while (str[length] != '\0') 
    {  
        length++; 
    } 
    return length; 
}
int main() { 
    char str[1000]; 
    printf("Enter text: "); 
    gets(str);
 
    int len = str_Len(str); 
    printf("Length of string = %d\n", len); 
    return 0; 
}