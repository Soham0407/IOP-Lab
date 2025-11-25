//PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],*p1,*p2,i;
    p1=a;
    p2=b;
    for(i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    for(i=0;i<n;i++)
    {
        *(p2+i)=*(p1+n-1-i);
    }
    printf("Elements of second array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p2+i));
    }
}