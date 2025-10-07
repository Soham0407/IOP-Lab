//Program to read a number N and printt a single digit answer showing sum of digit of N
#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter a number:");
    scanf(" %d",&num);
    do
    {
        sum=0;
        while(num>0)
        {
        sum=sum+num%10;
        num=num/10;
        }
        num=sum;
    } while (sum>9);
    printf("%d",sum);    
    return 0;
}