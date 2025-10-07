//Read numbers till a negative number is entered and calculate sum of a list of numbers read.
#include<stdio.h>
int main()
{
   int num=0,sum=0;
   do
    {
    sum=sum+num;
    scanf("%d",&num);
    } while (num>0);
   printf("Sum of positive numbers is %d",sum);
}