//program to sort N given strings in ascending (alphabetical) order.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter number of strings: ");
    int n;
    scanf("%d",&n);
    char str[n][100],temp[100];
    getchar();
    for(int i=0;i<n;i++)
    {
        gets(str[i]);
    }
    //sorting strings in ascending order
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Strings in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        puts(str[i]);
    }
}