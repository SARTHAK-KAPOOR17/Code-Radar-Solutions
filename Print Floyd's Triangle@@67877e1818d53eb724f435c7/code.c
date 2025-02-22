#include<stdio.h>
int main(){
    int N;
    int num = 1;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        for(int j = 1, j = i + 1; j--){
            printf(num);
            num++;
        }
    }
    return 0;
}