#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ev = 0;
    while (ev < n) {
        printf("%3d ", ev);
        ev += 2;
    }
    printf("\n");
    return 0;
}

// --- OUTPUT ---
// 10
//   0   2   4   6   8 