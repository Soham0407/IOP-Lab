//PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>
int main()
{
    int a[10],b[10],*p1,*p2,n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    p1=a;
    p2=b;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    for(i=0;i<n;i++)
    {
        *(p2+i)=*(p1+i);
    }
    printf("Elements of second array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p2+i));
    }
}