//Program to calculate value of Y(x,n).
#include<stdio.h>
int main()
{
    int n;
    float x,Y,t;
    t=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of x: ");
    scanf("%f",&x);
    if(n==1){
        Y=1+x;
    }
    else if(n==2){
        Y=1+x/n;
    }
    else if(n==3){
        for(int i=1;i<=n;i++){
        t=x*t;    
        }
        Y=1+t;
    }
    else if(n>3 || n<1){
        Y=1+n*x;
    }
    printf("Value of Y is %f",Y);
    return 0;

}