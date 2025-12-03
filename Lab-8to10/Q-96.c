//PROGRAM TO SORT A LIST OF STRINGS IN ASCENDING ORDER USING POINTERS.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][50], temp[50], *p1, *p2;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", str[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            p1 = str[i];
            p2 = str[j];
            if (strcmp(p1, p2) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    return 0;
}