#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Printing spaces for alignment
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing increasing numbers
        for (int num = 1; num <= i; num++) {
            printf("%d", num);
        }

        // Printing decreasing numbers
        for (int num = i - 1; num >= 1; num--) {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}