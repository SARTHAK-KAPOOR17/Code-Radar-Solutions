#include <stdio.h>

void printInvertedTriangle(int N) {
    for (int i = N; i >= 1; i--) {  // Outer loop for rows
        for (int j = 1; j <= i; j++) {  // Inner loop for columns
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printInvertedTriangle(N);

    return 0;
}
