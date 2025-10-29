//FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
#include <stdio.h>
long fact(int n) 
{ 
    long f = 1; 
    for (int i = 1; i <= n; i++) 
        f = f*i; 
    return f; 
}
long nCr(int n,int r) 
{ 
    return fact(n)/(fact(r)*fact(n - r)); 
}
int main() 
{ 
    int n, r; 
    printf("Enter n and r: "); 
    scanf("%d %d", &n, &r); 
    printf("nCr = %ld", nCr(n,r)); 
    return 0; 
}