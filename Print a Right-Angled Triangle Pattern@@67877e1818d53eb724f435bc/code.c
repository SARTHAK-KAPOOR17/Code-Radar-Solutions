#include<stdio.h>
void right_triangle(int N){
    for(int i = N; i <= 1; i++){
        for(int j = 1; i >= 1; i--){
            printf("*\n");
        }
    }
}

#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    right_triangle(N);
}