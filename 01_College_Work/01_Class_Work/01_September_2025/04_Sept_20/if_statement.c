#include <stdio.h>
int main() {
    int a;
    printf("Enter a password:");
    scanf("%d", &a);

    if(a == 1234) {
        printf("Your password is valid.\n");
    } else {
        printf("Your password is invalid.\n");
    }
    return 0;
}
