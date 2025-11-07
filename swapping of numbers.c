#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    
    // Function pointer declaration
    void (*swapPtr)(int *, int *);
    
    // Assign address of swap function to function pointer
    swapPtr = swap;
    
    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    // Call swap using function pointer
    (*swapPtr)(&x, &y);
    
    printf("After swapping:  x = %d, y = %d\n", x, y);
    
    return 0;
}

