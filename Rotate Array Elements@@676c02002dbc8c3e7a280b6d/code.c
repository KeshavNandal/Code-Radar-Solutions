#include <stdio.h>

void rotatearr(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    k = k % n; // To handle rotations larger than n

    // Step 1: Reverse the entire array
    rotatearr(arr, 0, n - 1);
    
    // Step 2: Reverse the first k elements
    rotatearr(arr, 0, k - 1);
    
    // Step 3: Reverse the remaining n - k elements
    rotatearr(arr, k, n - 1);
    
    // Output the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
