#include <stdio.h>

int main() {
    char a;

    // Read a single character
    scanf(" %c", &a);

    // Check for vowels
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel\n");
    }
    // Check for consonants
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("Consonant\n");
    }
    // Check for digits
    else if (a >= '0' && a <= '9') {
        printf("Digit\n");
    }
    // Anything else is a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
