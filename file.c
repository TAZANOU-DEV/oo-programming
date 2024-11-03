#include <stdio.h>

int main() {
    int N, i, target, left, right, mid, found = 0;
    
    // Accept the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
    int arr[N];
    
    // Accept N sorted numbers in ascending order
    printf("Enter %d sorted numbers (ascending order):\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Accept the number to search for
    printf("Enter the number to search: ");
    scanf("%d", &target);
    
    // Initialize binary search boundaries
    left = 0;
    right = N - 1;
    
    // Perform binary search using a for loop
    for (; left <= right; ) {
        mid = (left + right) / 2;
        
        // If the target is found
        if (arr[mid] == target) {
            printf("Success! %d found at index %d.\n", target, mid);
            found = 1;
            break;
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    
    // If the number is not found
    if (!found) {
        printf("Failure! %d not found in the array.\n", target);
    }
    
    return 0;
}
