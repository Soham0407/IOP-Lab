//WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE: 
//A. COPY ONE STRING INTO ANOTHER
#include <stdio.h>
void stringCopy(char str1[100], char str2[100]) 
{
    int i = 0;
    while (str1[i] != '\0') 
    {
        str2[i] = str1[i]; 
        i++;
    }
    str2[i] = '\0';
} 
//B. COMPARE TWO STRINGS 
int stringCompare(char str1[100], char str2[100]) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] > str2[i]) 
        {
            return 1; 
        }
        else if (str1[i] < str2[i]) 
        {
            return -1; 
        }
        i++;
    }
    return 0; 
}
//C. CONCAT TWO STRINGS 
void stringConcat(char str1[100], char str2[100]) 
{
    int i = 0;
    while (str1[i] != '\0') 
    {
        i++; 
    }
    int j = 0;
    while (str2[j] != '\0') 
    {
        str1[i] = str2[j]; 
        i++;
        j++;
    }
    str1[i] = '\0';
}
//D. REVERSE A GIVEN STRING
void stringReverse(char str[100]) 
{
    int start = 0;
    int end = 0;
    while (str[end] != '\0') 
    {
        end++; 
    }
    end--; 
    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str1[100],str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    char copy[100];
    stringCopy(str1, copy);
    printf("Copied String: %s\n", copy);
    int cmpResult = stringCompare(str1, str2);
    if (cmpResult == 0) 
    {
        printf("Strings are equal.\n");
    } 
    else if (cmpResult < 0) 
    {
        printf("First string is less than second string.\n");
    } 
    else 
    {
        printf("First string is greater than second string.\n");
    }
    stringConcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
    stringReverse(str1);
    printf("Reversed String: %s\n", str1);
    return 0;
}