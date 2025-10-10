#include <stdio.h>
int main() {
    int a;
    float b;
    printf("Enter an integer and a float value: ");

    // Taking multiple inputs
    scanf("%d %f", &a, &b);
    printf("You entered %d and %f\n", a, b);
    return 0;
}