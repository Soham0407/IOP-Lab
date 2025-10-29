//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS. 
#include<stdio.h>
int main()
{
    int arr[3][3];
    int sum1=0,sum2=0,sum3=0;
    printf("Enter the elements of matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d\t",arr[i][j]);
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        sum1=sum1+arr[0][i];
        sum2=sum2+arr[1][i];
        sum3=sum3+arr[2][i];
    }
    printf("The sum of individual rows is %d %d %d",sum1,sum2,sum3);
}