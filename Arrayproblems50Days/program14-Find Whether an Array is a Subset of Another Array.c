#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 4, 5}; 

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 

    // Assume arr1 is a subset initially
    int isSubset = 1;

    // Check each element of arr1
    for (int i = 0; i < size1; i++) {
        int found = 0; // Flag for element found

        // Check against each element of arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1; // Element found
                break;
            }
        }

        // If any element of arr1 is not found in arr2
        if (!found) {
            isSubset = 0; // Not a subset
            break;
        }
    }

    // Output the result
    if (isSubset) {
        printf("arr1 is a subset of arr2.\n");
    } else {
        printf("arr1 is not a subset of arr2.\n");
    }

    return 0;
}
