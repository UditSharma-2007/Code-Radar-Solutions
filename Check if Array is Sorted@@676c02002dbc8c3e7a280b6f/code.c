#include <stdio.h>

// Function to check if an array is sorted in non-decreasing order
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n;
    
    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking input for array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Checking if the array is sorted
    if (isSorted(arr, n)) {
        printf("The array is sorted in non-decreasing order.\n");
    } else {
        printf("The array is not sorted.\n");
    }
    
    return 0;
}
