#include <stdio.h>

void printInvertedTriangle(int N) {
    for (int i = N; i >= 1; i++) {  
        for (int j = 1; j <= i; j++) {  
            printf("* ");
        }
        printf("\n");  
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printInvertedTriangle(N);

    return 0;
}
