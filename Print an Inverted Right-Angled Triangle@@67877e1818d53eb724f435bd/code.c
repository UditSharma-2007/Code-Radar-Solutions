// #include <stdio.h>

// int main() {
//     int n, i, j;

//     // Get the number of rows from the user
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     // Loop through each row
//     for (i = n; i >= 1; i--) {
//         // Loop to print stars in each row
//         for (j = 1; j <= i; j++) {
//             printf("*");
//         }
//         // Move to the next line after each row
//         printf("\n");
//     }


// return 0;
// }

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("%d\n", result);
    }
    return 0;
}

























