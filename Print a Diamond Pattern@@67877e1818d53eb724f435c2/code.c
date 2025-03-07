#include<stdio.h>
int main(){
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
         for (int l = rows; i >= 1; i--) {
        for (int m = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int n = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
        printf("\n");
    }
    return 0;
}