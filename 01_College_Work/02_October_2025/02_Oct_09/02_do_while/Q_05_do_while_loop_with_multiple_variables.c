#include <stdio.h>
int main() {
    int i = 0, j = 5;
    do {
        printf("i = %d, j = %d\n", i, j);
        i++; j--;;
    } while (i < j);
    return 0;
}