#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        printf("Vowel\n");
    } else if((ch > 'a') && (ch <= 'z')){
        printf("Consonant\n");
    } else if((0<=ch<=9) ){
        printf("Digit");
    } else{
        printf("Special Character\n");
    }
    return 0;
}