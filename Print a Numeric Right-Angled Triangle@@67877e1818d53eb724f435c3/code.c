#include<stdio.h>
int main(){
    int n;
    // int sum = 1;
    scanf("%d", &n);

    for(int i = 1; i < n; i++){ // No of rows
        for(int j = 1; j < i; j++){ // No of coloumns
            printf("%d ", j);
            // sum = sum + 1;
        }
        printf("\n");
    }
    return 0;
}