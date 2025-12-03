//MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
#include <stdio.h>
void modifyValue(int *ptr, int newValue) 
{
    *ptr = newValue; 
}
int main() 
{
    int originalValue;
    int newValue;
    printf("Enter original value: ");
    scanf("%d", &originalValue);

    printf("Enter new value to modify: ");
    scanf("%d", &newValue);

    modifyValue(&originalValue, newValue); 

    printf("Modified Value: %d\n", originalValue);
    return 0;
}