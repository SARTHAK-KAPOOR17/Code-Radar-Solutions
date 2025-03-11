#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int value = (i % 2 == 0) ? 0 : 1;

        for (int j = 1; j <= i; j++) {
            printf("%d ", value);
            value = 1 - value;
        }
        printf("\n");
    }

    return 0;
}
