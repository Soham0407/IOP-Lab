// Case study-Gemstone
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char rocks[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", rocks[i]);
    }
    int Count = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int Gem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; rocks[i][j] != '\0'; j++)
            {
                if (rocks[i][j] == c)
                {
                    Gem += 1;
                    break;
                }
            }
        }
        if (Gem == n)
        {
            Count++;
        }
    }
    printf("%d\n",Count);
    return 0;
}