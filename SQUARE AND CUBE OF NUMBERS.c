#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer (n >= 0): ");
    scanf("%d", &n);

    printf("Number\tSquare\tCube\n");

    for (i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}

