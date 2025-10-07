//lab9
//Program to read time n Hours, minutes, seconds and convert into total seconds.
#include<stdio.h>
int main()
{
    int hours,minutes,seconds,total_seconds;
    //Taking input of time in hours, minutes and seconds
    printf("Enter hours: ");
    scanf("%d",&hours);
    printf("Enter minutes: ");
    scanf("%d",&minutes);
    printf("Enter seconds: ");
    scanf("%d",&seconds);

    //Conversion to total seconds
    total_seconds=(hours*3600)+(minutes*60)+seconds;
    printf("The total time in seconds is: %d seconds",total_seconds);
    return 0;
}