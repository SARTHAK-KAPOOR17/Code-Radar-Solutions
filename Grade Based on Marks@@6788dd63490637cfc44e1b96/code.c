#include<stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a >= 90){
        printf("%C\n A");
    } else if((a >= 80) && (a < 90)){
        printf("%C\n B");
    } else if((a >= 70) && (a < 80)){
        printf("%C\n C");
    } else if((a >= 60) && (a < 70)){
        printf("%C\n D");
    } else{
        printf("%C\n F");
    }
    return 0;
}