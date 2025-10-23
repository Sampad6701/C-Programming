// Function Prototype
#include <stdio.h>
int sum (int a, int b);
int main() {
    int x, y, result; 
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    result = sum(x, y);
    printf("Sum : %d\n", result);
    return 0;
}

int sum (int p, int q) {
    int s;
    s = p + q;
    return s;
}

// Enter two integers: 5 7
// Sum : 12
