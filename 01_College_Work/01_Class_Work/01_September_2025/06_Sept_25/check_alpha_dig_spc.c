// Check whether a given character is an alphabet, a digit or a special character

#include <stdio.h>
int main() {
    char chr;
    printf("Enter an alphabet: ");
    scanf(" %c", &chr);

    if((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')) {
        printf("%c is an an Alphabet.\n", chr);
    }
    else if(chr >= '0' && chr <= '9') {
        printf("%c is a Digit.\n", chr);
    }
    else {
        printf("%c is a Special Character.\n", chr);
    }

    return 0;
}