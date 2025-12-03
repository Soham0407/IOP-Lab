//Case study-IsFibo
//Program to check if N is an element of fibonacci sequence.
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        int a=0;
        int b=1;
        int sum=0;
        while(arr[i]>sum)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        if(arr[i]==sum)
        printf("IsFibo\n");

        else if(arr[i]==0)
        printf("IsFibo\n");

        else
        printf("IsNotFibo\n");
    }
}