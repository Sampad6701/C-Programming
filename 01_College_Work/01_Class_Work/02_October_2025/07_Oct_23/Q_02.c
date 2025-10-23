// Function with arguments but no return value.
#include <stdio.h>
void displaySum(int a, int b);
int main() {
    int x, y; 
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    displaySum(x, y);
    return 0;
}

void displaySum(int a, int b) {
    printf("Sum : %d\n", a + b);
}

// Enter two integers: 4 7
// Sum : 11