#include<stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    if(num <= 0){
        printf("Out of Range");
    } else if((num >= 1) || (num <= 100)){
        printf("In Range");
    } else{
        printf("Out of Range");
    }
    return 0;
}