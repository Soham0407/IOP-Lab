//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
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
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];

            if(arr[i][j]<min)
            min=arr[i][j];
        }
    }
    printf("The max element of matrix is %d\n",max);
    printf("The min element of matrix is %d",min);
}
