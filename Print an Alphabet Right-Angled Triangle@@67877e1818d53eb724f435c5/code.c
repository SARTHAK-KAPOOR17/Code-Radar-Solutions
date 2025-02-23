#include<stdio.h>
int main(){
    int n; // No of rows
    // char ch = 'A';
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(char ch = 'A'; ch <='A'+ i; ch++){
            printf("%c ", ch);
            ch += 1;
        }
        printf("\n");
    }
    return 0;
}