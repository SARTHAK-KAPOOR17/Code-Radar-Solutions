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
    
    k = k % n; // To handle cases where k > n

    // Step 1: Reverse the whole array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);

    // Output result
    printf("%d\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
