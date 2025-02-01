#include<stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a >= 90){
        printf("%d\n A");
    } else if((a >= 80) && (a < 90)){
        printf("%d\n B");
    } else if((a >= 70) && (a < 80)){
        printf("%d\n C");
    } else if((a >= 60) && (a < 70)){
        printf("%d\n D");
    } else{
        printf("%d\n F");
    }
    return 0;
}