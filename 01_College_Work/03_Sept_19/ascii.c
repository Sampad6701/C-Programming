// ASCII VALUES

#include <stdio.h>
int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);
    
    // when %c is used, a character is displayed
    printf("You entered: %c\n", chr);

    // when %d is used, the ASCII value of the character is displayed
    printf("ASCII value: %d\n", chr);
    return 0;
}