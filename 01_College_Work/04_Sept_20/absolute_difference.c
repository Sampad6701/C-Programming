#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        y = x - y;
    } else {
        y = y - x;
    }

    printf("Absolute difference: %d\n", y);
    return 0;
}