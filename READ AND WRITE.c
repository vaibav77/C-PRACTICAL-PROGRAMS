#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[50];
    char ch;

    // Ask user for the file name
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file for writing
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Writing to the file
    printf("Enter text to write to the file (end with '~'):\n");
    getchar();  // to consume the newline left by scanf
    while ((ch = getchar()) != '~') {
        fputc(ch, fptr);
    }

    fclose(fptr);  // close the file after writing
    printf("\nData written to file successfully.\n");

    // Open file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Reading the file
    printf("\nContents of the file:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);  // close the file after reading
    printf("\n\nFile read successfully.\n");

    return 0;
}

