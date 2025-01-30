#include <stdio.h>
int main(){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        printf(num1, num2);
    } else if(num2 > num1){
        printf(num1, num2);
    } else{
        printf(num1, num2);
    }
    return 0;
}