#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
	// Example array where 3 is missing
    printf("Array of full elements is: arr[1,2,3,4,5,6]\n");
    printf("Array of missing element is: arr[1,2,4,5,6]\n");
	
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;
	// Since one element is missing
    int expectedSum = n * (n + 1) / 2;
	// Sum of first n natural numbers
    int actualSum = 0;

    // Calculate the actual sum of the array elements
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    // The missing element is the difference between expected and actual sum
    int missingElement = expectedSum - actualSum;

    printf("The missing element is: %d\n", missingElement);

    return 0;
}
