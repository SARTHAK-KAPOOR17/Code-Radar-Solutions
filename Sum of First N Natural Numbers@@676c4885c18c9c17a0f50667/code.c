#include<stdio.h>
int main(){
    int N,sum;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        sum = N(N + 1) / 2;
        printf("%d", sum);
    }
    return 0;
}