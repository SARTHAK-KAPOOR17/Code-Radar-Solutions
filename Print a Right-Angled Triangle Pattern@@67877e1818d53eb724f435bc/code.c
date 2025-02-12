#include<stdio.h>
void right_triangle(int N){
    for(int i = 1; i <= 1; i++){
        for(int j = N; i >= 1; i--){
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