#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a != b){
        printf("Flase\n");
    } else{
        printf("True\n");
    }
    return 0;
}