//FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.
#include <stdio.h> 
int fibo(int n) 
{ 
    int a = 0, b = 1, c; 
    printf("Fibonacci Series: "); 
    for (int i = 1; i <= n; i++) 
    { 
        printf("%d ", a); 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    printf("\t"); 
} 
 
int main() 
{ 
    int n; 
    printf("Enter the number: "); 
    scanf("%d", &n); 
    fibo(n); 
    return 0; 
}