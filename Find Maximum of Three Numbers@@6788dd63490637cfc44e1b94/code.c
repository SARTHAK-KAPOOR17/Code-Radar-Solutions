#include<stdio.h>
int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        printf(a);
    } else if(b > c){
        printf(b);
    } else if(c > a){
        printf(c);
    }
    return 0;
}