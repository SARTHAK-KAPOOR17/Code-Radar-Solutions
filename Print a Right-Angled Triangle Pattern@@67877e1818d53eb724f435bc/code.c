#include<stdio.h>
int main(){
    int i = 1, N, j = 1;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}