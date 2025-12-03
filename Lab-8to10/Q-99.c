//PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE.
#include<stdio.h>
int main()
{
    int vowel_count = 0;
    char ch;
    FILE *file;
    file = fopen("C:\\Users\\Abcd\\OneDrive\\Desktop\\input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
    }
    else
    {
        while ((ch = fgetc(file)) != EOF)
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel_count++;
            }
        }
    }
    fclose(file);
    printf("Number of vowels in the file: %d\n", vowel_count);
    return 0;
}