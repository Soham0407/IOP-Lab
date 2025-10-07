//Program to check whether a number is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int digit=0,number,n,sum=0,temp,temp1;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp=number;
    temp1=number;
    while(number>0){
        number=number/10;
        digit=digit+1;
    }
    while (temp>0)
    {
        n=temp%10;
        sum=sum + pow(n,digit);
        temp=temp/10;   
    }
    if (sum==temp1)
    {
        printf("The number %d is armstrong",temp1);
    }
    else
    {
        printf("The number %d is not armstrong",temp1);
    }
    return 0;
}