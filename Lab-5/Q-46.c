#include <stdio.h>
#include <stdbool.h>
int main()
{
    // Defining the hat size table
    float hatSizes[7][2] = {
    {20.625, 6.5},
    {21.125, 6.75},
    {21.625, 7.0},  
    {22.125, 7.25},   
    {22.625, 7.5},
    {23.125, 7.75},
    {23.375, 7.875}};
    float headSize;
    bool found = false;
    printf("Enter the circumference of your head in inches: ");
    scanf("%f", &headSize);
    // Search the hat size table
    for (int i = 0; i < 12; i++)
    {
    if (headSize <= hatSizes[i][0])
    {
    printf("Your hat size is approximately: %f\n",hatSizes[i][1]);
    found = true;
    break;
    }
    }
    if (found == false)
    {
    printf("No hat size found for your head size.\n");
    }
    return 0;
}