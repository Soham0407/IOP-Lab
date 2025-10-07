//Program to print sum of all even and odd numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,even,odd;
    even=0;
    odd=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even=even+i;
        }
        else if(i%2!=0){
            odd=odd+i;
        }
    }
    printf("Sum of even numbers is %d\n",even);
    printf("Sum of odd numbers is %d",odd);
    return 0;
}