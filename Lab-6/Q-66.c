//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];
    printf("Enter the elements of 1st matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter the elements of 2nd matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&arr2[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        sum[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("The sum of two matrix is: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d\t",sum[i][j]);
        printf("\n");
    }
}