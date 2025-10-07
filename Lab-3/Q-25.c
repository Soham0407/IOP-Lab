//lab25
//Program to print table of any number.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Table of %d:\n",number);
    for(int i=1;i<=10;i++){
        number=number*i;
        printf("%d\n",number);
        number=number/i;
    }
    return 0;
}