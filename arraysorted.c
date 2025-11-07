#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in ascending order
void sortAscending(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to sort the array in descending order
void sortDescending(int arr[], int n) {
    int i, j;
	for (i = 0; i < n - 1; i++) {
        for (
		 j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
   int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    int i;
	for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);

    // Sort in ascending order
    sortAscending(arr, n);
    printf("Array in ascending order: ");
    printArray(arr, n);

    // Sort in descending order
    sortDescending(arr, n);
    printf("Array in descending order: ");
    printArray(arr, n);

    return 0;
}
