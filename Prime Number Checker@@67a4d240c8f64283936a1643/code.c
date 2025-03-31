#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if prime
    if (isPrime(number))
        printf("%d is a Prime Number.\n", number);
    else
        printf("%d is Not a Prime Number.\n", number);
    
    return 0;
}
