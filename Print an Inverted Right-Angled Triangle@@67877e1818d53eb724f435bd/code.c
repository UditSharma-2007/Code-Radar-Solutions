#include <stdio.h>

void printInvertedTriangle(int n) {
    // Outer loop for rows, N se 1 tak
    for (int i = n; i >= 1; i--) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // New line after each row
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows (N): ");
    scanf("%d", &n);
    
    // Agar n negative ya zero hai toh invalid input
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printInvertedTriangle(n);
    }
    
    return 0;
}