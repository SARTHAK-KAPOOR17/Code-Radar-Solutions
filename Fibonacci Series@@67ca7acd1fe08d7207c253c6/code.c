#include<stdio.h>
int fibb(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        printf("%d", fibb(i));
    }
    return 0;
}