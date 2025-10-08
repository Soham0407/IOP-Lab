//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY ELEMENT.
#include<stdio.h>
int main()
{
    int arr[10],count_even=0,count_odd=0;
    printf("Enter the elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        count_even++;

        else
        count_odd++;
    }
    printf("No. of even elements= %d\n",count_even);
    printf("No. of odd elements= %d",count_odd);
}