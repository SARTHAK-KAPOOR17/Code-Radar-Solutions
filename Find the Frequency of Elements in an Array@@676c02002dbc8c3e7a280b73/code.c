#include <stdio.h>

int main() {
    int n;
    // printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize all frequencies as -1
    }

    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            int count = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate elements
                }
            }
            freq[i] = count;
        }
    }

    // printf("\nFrequency of each element:\n");
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d ", arr[i], freq[i]);
        }
    }

    return 0;
}
