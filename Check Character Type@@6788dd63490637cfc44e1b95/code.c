#include <stdio.h>
#include <ctype.h>

void checkCharacterType(char ch) {
    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a consonant (i.e., an alphabet but not a vowel)
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
    
    checkCharacterType(ch);
    
    return 0;
}
