#include <stdio.h>
int main() {
    int i = 0;
    do {
        printf("Running . . . %d\n", i);
        i++;
        if (i == 3) {
            break;
        }
    } while (1);
    return 0;
}