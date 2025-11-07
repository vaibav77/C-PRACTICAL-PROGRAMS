#include <stdio.h>

// Function to find the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') { 
        length++;  // Count characters until null terminator or newline
    }
    return length;
}

// Function to reverse a string in place
void stringReverse(char str[]) {
    int i, j;
    char temp;
    int length = stringLength(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Main function
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Safe input method

    printf("\nOriginal string: %s", str);
    printf("Length of string: %d\n", stringLength(str));

    stringReverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

