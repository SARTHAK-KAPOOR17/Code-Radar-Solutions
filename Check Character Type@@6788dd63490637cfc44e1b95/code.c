#include<stdio.h>
int main(){
    char ch;
// a, e, i, o, u
    scanf("%c", &ch);

    switch(ch){
        case 'a':
            printf("Vowel");
        break;

        case 'e':
            printf("Vowel");
        break;

        case 'i':
            printf("Vowel");
        break;

        case 'o':
            printf("Vowel");
        break;

        case 'u':
            printf("Vowel");
        break;

        if((ch >= 0) && (ch <= 9)){
            printf("Digit");
        } else if((ch >= 'a') && (ch <= 'z')){
            printf("Consonant");
        } else{
            printf("Special Character");
        }
    }
    return 0;
}