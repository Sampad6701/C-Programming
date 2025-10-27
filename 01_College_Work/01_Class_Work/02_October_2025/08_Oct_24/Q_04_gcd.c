#include <stdio.h>
int gcd(int a, int b);
int main() {
    int a, b, result;
    printf("Enter two numbers to find their GCD :");
    scanf("%d %d", &a ,&b);
    result = gcd(a, b);
    printf("GCD of %d and %d is %d", a, b, result);
    return 0;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
