#include<stdio.h>
int main(){
    int n;
    int i;

    scanf("%D", &n);

    while(i <= n){
        int j = 1;
        while(j <= n){
            printf("* \n");
            j++;
        }
        i++;
    }
}