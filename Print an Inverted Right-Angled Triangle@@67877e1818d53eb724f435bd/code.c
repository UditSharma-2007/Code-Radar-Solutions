#include <stdio.h>

int main() {
    int n, i, j;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (i = n; i >= 1; i--) {
        // Loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}