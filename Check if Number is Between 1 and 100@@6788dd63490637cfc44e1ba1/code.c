#include<stdio.h>

int main(){
    int range;

    scanf("%d", &range);

    if(range <= 0){
        printf("Out of Range");
    } else if((range >= 1) && (range == 100)){
        printf("In Range");
    }
    return 0;
}