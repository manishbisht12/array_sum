#include <stdio.h>

int main() {
    int arr[100], size, i, sum = 0; // Initialize sum to avoid garbage value
    
    printf("Enter array size: ");
    scanf("%d", &size); // Get array size from user
    
    printf("Enter array elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Store elements in the array
    }
    
    for(i = 0; i < size; i++) {
        sum += arr[i]; // Add elements to sum
    }
    
    printf("Sum of the array = %d\n", sum); // Display the sum
    
    return 0;
}
