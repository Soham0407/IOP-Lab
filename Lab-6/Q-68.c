//PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,result[3][3];
    printf("Enter elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //Multiplying two matrices
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j]=0;
            for(int k=0;k<3;k++)
            {
                result[i][j]=result[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix after multiplication:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}