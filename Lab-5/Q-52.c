#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        printf(" ");

        for(int k=1;k<=i;k++)
        printf("%d",k);
        
        for(int l=1;l<i;l++)
        printf("%d",i-l);
        printf("\n");
    }
    return 0;
}