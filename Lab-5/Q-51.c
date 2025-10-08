#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5;k++)
        {
            if(k==i)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
}