//lab11
//Program to read total second and convert it into time i.e. in hours, minutes and seconds.
#include<stdio.h>
int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    
    //Conversion to hours, minutes and seconds
    hours = total_seconds/3600;
    minutes = total_seconds%3600/60;
    seconds = total_seconds%60;
    printf("The time is: %d hours, %d minutes and %d seconds", hours, minutes, seconds);
    return 0;
}