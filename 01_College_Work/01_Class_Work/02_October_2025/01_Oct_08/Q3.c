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

// --- OUTPUT --
// 0 1
// 1 2
// 2 4
// 3 8
// 4 16
// 5 32
// 6 64