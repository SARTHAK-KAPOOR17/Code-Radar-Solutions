#include <stdio.h>

// Function to reverse a subarray from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while(start < end) {
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
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n; // Handle cases where k > n

    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Reverse first k elements
    reverse(arr, 0, k - 1);

    // Reverse the remaining n - k elements
    reverse(arr, k, n - 1);

    // Output the rotated array
    for(int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
