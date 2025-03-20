#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int end = n - 1;

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort all elements in ascending order
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (arr[j] > arr[k]) {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    // Step 2: Move all zeros to the end
    for (int k = 0; k <= end; k++) {
        if (arr[k] == 0) {
            int temp = arr[k];
            arr[k] = arr[end];
            arr[end] = temp;
            end--;
            k--; // Recheck the current index
        }
    }

    // Output the result
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
