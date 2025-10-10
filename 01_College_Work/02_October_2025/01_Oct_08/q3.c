#include <stdio.h>
int main() {
    int i = 0, pow = 1;
    while (i <= 6) {
        printf("%d %d\n", i, pow);
        i++;
        pow *= 2;
    }
    return 0;
}