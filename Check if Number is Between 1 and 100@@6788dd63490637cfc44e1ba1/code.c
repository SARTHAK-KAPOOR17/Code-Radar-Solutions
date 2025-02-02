#include<stdio.h>
int main(){
    int a;

    scanf("%d", &a);

    if(a <= 0){
        pirntf("Out of Range");
    } else if((a >= 1) || (a <= 100)){
        pirntf("In Range");
    } else{
        pirntf("Out of Range");
    }
    return 0;
}