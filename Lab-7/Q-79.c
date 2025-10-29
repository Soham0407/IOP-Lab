//FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y.
#include <stdio.h>
int exchange(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main() 
{ 
    int x, y; 
    printf("Enter two numbers: "); 
    scanf("%d %d",&x,&y); 
    exchange(&x,&y); 
    printf("After swapping: x = %d, y = %d\n", x, y); 
    return 0; 
} 