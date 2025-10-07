//Program to print fibonacci series.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum;
    
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
       
    }

}