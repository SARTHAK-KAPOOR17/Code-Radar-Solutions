#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);
// a, e, i, o, u
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')){
            printf("Vowel");
        } if((ch >= 'a') && (ch <= 'z')){
            if((ch >= 'A') && (ch <= 'Z')){
                printf("Consonant\n");
            } else if((ch >= 0) && (ch <= 9)){
                printf("Digit\n");
            } else{
                printf("Special Character\n");
            }
        }
    }
    return 0;
}