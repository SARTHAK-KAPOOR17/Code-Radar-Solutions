#include<stdio.h>
int main(){
    int n;
    int num = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1, j = i + 1; j--){
            printf(num);
            num++;
        }
    }
    return 0;
}