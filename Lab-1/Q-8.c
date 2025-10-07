//lab8
//Write a program to convert period of revolution of Earth(31558150 seconds) into days, hours, and minutes.
#include<stdio.h>
int main()
{
    int seconds,days,hours,minutes;
    seconds=31558150;

    //Conversion to days, hours, minutes and seconds
    days=seconds/(60*60*24);
    hours=(seconds%86400)/3600; //86400=Number of seconds in a day
    minutes=((seconds%86400)%3600)/60;
    printf("The period of revolution of Earth in days, hours and minutes is: %d days, %d hours and %d minutes",days,hours,minutes);
    return 0;
}