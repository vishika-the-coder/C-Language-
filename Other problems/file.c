#include <stdio.h>

int main() {
    FILE *filePtr;  // Step 1: Declare a file pointer
    char data[100];

    // Step 2: Open the file in write mode
    filePtr = fopen("data.txt", "w");
    if (filePtr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Step 3: Get user input and write it to the file
    printf("Enter some text to write to the file: ");
    fgets(data, sizeof(data), stdin);  // Read user input

    fprintf(filePtr, "%s", data);  // Write user input to the file
    fclose(filePtr);  // Step 4: Close the file after writing

    // Step 5: Re-open the file in read mode
    filePtr = fopen("data.txt", "r");
    if (filePtr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Step 6: Read data from the file and display it
    printf("Data read from file:\n");
    while (fgets(data, sizeof(data), filePtr) != NULL) {
        printf("%s", data);
    }

    fclose(filePtr);  // Step 7: Close the file after reading
    return 0;
}