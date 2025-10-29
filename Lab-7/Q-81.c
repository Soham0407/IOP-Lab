//FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
int isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
    for (int i = 2; i <= n / 2; i++) 
    { 
        if (n % i == 0) 
            return 0; 
    } 
    return 1; 
} 
 
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    if (isPrime(num)==1) 
        printf("1"); 
    else 
        printf("0");
    return 0; 
}