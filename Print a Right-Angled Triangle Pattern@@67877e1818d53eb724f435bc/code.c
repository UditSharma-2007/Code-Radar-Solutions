#include <stdio.h>

int main() {
    int n, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (i = 1; i <= n; i++) {
        // Loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
}
return 0;