#include<stdio.h>
void right_triangle(int N){
    for(int i = 1; i <= N; i++){
        for(int j = 1; i >= i; i--){
            printf("*");
        }
        printf("\n");
    }

int main(){
    int N;
    scanf("%d", &N);

    right_triangle(N);
}
return 0;
}