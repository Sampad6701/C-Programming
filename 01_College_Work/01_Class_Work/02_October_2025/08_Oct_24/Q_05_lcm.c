#include <stdio.h>
int lcm (int a , int b);
int gcd(int a, int b);
int main() {
    int a, b, result;
    printf("Enter two numbers to find their lcm : ");
    scanf("%d %d", &a, &b);
    result = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, result);
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

int lcm (int a, int b) {
    return (a * b) / gcd(a, b);
}
