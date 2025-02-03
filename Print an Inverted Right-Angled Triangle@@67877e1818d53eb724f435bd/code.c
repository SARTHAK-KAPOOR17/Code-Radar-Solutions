#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    for(a = 0; a < 2, a--){
        printf("*");
    }
    return 0;
}