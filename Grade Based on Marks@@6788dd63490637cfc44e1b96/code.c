#include<stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a >= 90){
        printf("\n A");
    } else if((a >= 80) && (a < 90)){
        printf("\n B");
    } else if((a >= 70) && (a < 80)){
        printf("\n C");
    } else if((a >= 60) && (a < 70)){
        printf("\n D");
    } else{
        printf("\n F");
    }
    return 0;
}