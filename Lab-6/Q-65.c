//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include<stdio.h>
int main()
{
    int arr[3][3];
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
    printf("The transpose of matrix is: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d\t",arr[j][i]);
        printf("\n");
    }
}