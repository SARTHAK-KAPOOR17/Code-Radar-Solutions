#include<stdio.h>

int main(){
    int range;

    scanf("%d", &range);

    if(range <= 0){
        printf("Out of Range");
    } else{
        printf("In Range");
    }
    return 0;
}