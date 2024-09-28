//WAP to find the number of occurrences of the elements of an array.

#include <stdio.h>

int main() {
    int arr[100], count[100], n, i, j, uniqueCount;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = -1; // Initialize count array
    }

    // Count occurrences
    for (i = 0; i < n; i++) {
        int occurrence = 1;
        if (count[i] == -1) { // Element not counted yet
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    occurrence++;
                    count[j] = 0; // Mark as counted
                }
            }
            count[i] = occurrence; // Store the count of current element
        }
    }

    // Display the counts
    printf("Element | Count\n");
    printf("-----------------\n");
    for (i = 0; i < n; i++) {
        if (count[i] != 0) { // Print only for elements that were counted
            printf("%7d | %d\n", arr[i], count[i]);
        }
    }

    return 0;
}
