#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If it's neither vowel, consonant, nor digit, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
