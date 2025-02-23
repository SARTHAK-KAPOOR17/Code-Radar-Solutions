#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        // Print leading spaces
        // for (int j = 1; j <= n - i; j++) {
        //     printf(" ");
        // }
        // // Print numbers
        for (char ch = 'A'; ch <='A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
