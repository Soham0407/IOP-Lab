#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        printf(" ");

        for(int k=1;k<=(2*i-1);k++)
        printf("*");
        printf("\n");
    }
    for(int l=3;l>=1;l--)
    {
        for(int m=1;m<=l*2-1;m++)
        printf("*");
        printf("\n");
    }
}