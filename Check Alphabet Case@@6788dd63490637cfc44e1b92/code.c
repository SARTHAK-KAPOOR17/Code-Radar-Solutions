#include<stdio.h>
int main(){
    char ch;

    scanf("%C", &ch);
    
    if(isupper(ch)){
        printf("%c\nUppercase");
    } else{
        printf("%c\nLowercase");
    }
    return 0;
}