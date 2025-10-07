//Program to check whether a number is palindrom or not.
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    int r=0;
    while(n>0){
        r = r + n%10;
        r = r*10;
        n = n/10;
    }
    r = r/10;
    if(r==m){
        printf("The number %d is palindrom",m);
    }
    else{
        printf("The number %d is not palindrom",m);
    }
    return 0;
}