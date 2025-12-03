//PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.
#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;

    file = fopen("C:\\Users\\Abcd\\OneDrive\\Desktop\\input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = getc(file)) != EOF)
    {
        char_count++;

        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            word_count++;
        }

        if (ch == '\n')
        {
            line_count++;
        }
    }
        word_count++;
        line_count++; // To count the last word and line if file doesn't end with space or newline
    fclose(file);

    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    return 0;
}