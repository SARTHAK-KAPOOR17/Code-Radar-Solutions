#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);
    
    if(isupper(ch)){
        printf("%c\nUppercase");
    } else{
        printf("%c\nLowercase");
    }
    return 0;
}