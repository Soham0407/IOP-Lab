//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,NEGATIVE, AND ZERO ELEMENTS.
#include<stdio.h>
int main()
{
    int arr[10],count_zero=0,count_positive=0,count_negative=0;
    printf("Enter the elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        count_zero++;

        else if(arr[i]>0)
        count_positive++;

        else
        count_negative++;
    }
    printf("No. of positive elements= %d\n",count_positive);
    printf("No. of zero elements= %d\n",count_zero);
    printf("No. of negative elements= %d",count_negative);
}