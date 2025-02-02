#include<stdio.h>
int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if('+'){
        printf(a + b);
    } else if('-'){
        printf(a - b);
    } else if('*'){
        printf(a * b);
    } else if('/'){
        printf(a / b);
    }
    return 0;
}