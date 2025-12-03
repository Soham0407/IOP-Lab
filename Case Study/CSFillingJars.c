//Case study-Filling jars
#include <stdio.h>
 int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        sum = sum + (b-a+1)*k;
    }
    int average = sum/n;
    printf("%d", average);
    return 0;
}