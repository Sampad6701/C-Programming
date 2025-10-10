// Check whether a given alphabet is uppercase or lowercase

#include <stdio.h>
int main() {
    char alpha;
    printf("Enter an alphabet: ");
    scanf(" %c", &alpha);

    if(alpha >= 'A' && alpha <= 'Z') {
        printf("%c is an Uppercase alphabet.\n", alpha);
    }
    else if(alpha >= 'a' && alpha <= 'z') {
        printf("%c is a Lowercase alphabet.\n", alpha);
    }
    else {
        printf("%c is not an alphabet.\n", alpha);
    }

    return 0;
}