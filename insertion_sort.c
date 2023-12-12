#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;

    // Traverse through the unsorted part of the array
    for (i = 1; i < n; i++) {
        key = arr[i]; // Select the current element to be inserted in the sorted subarray
        j = i - 1;

        // Shift elements of sorted subarray that are greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert the selected element into its correct position
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
