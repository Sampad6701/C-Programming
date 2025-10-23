// WACP to display a welcome message using a funciton that does not return a value.
#include <stdio.h>
void welcomeMessage();
int main() {
    welcomeMessage();
    return 0;
}

void welcomeMessage() {
    printf("Welcome to the C Programming Function!\n");
}