#include<stdio.h>
int main(){
    int temp;

    scanf("%d", &temp);

    if(temp <= 0){
        pirntf("Freezing");
    } else{
        pirntf("Above Freezing");
    }
    return 0;
}