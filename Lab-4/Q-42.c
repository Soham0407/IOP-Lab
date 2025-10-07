//Program to check wheteher a number is prime or not.
#include<stdio.h>
int main()
{
    int n,flag=0;
    int i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(flag==0 && i<n)
    {
        if(n%i==0)
        flag=1;
        i++;
    }
    if(flag==0)
    printf("The number %d is prime",n);
    else
    printf("The number %d is not prime",n);
    return 0;
}