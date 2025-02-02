#include<stdio.h>
int main(){
    int a, b;
    char si;

    scanf("%d %d %c", &a, &b, &si);

    switch(si){
        case '+':
           printf(a + b);
        break;
        case '-':
           printf(a - b);
        break;
        case '*':
           printf(a * b);
        break;
        case '/':
            printf(a / b);
        break;   

    }
    return 0;
}