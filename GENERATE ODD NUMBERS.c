#include <stdio.h>

int main() {
    int n, i;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {   // Check if number is odd
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
