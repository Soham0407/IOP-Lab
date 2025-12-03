//Case study-Find Digits
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i<t; i++)
    {
        int num, temp, digit, count = 0;
        scanf("%d", &num);
        temp = num;
        while (temp > 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            if (num % digit == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}