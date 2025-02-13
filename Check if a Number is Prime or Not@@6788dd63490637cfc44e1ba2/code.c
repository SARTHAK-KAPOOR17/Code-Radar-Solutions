#include<stdio.h>
int isPrime(int num){
    if(num < 2) return 0;

    for(int i = 0; i < num; i++){
        if(num % 2 == 0){
            return 0;
        }
        return 1;
    }


int main(){
    int num;
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime");
     else
        printf("Not Prime");
    
    return 0;
}
}
