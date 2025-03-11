#include<stdio.h>
int main(){
    int rows, num = 0;

    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int j = 0; j <= i + 1; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}