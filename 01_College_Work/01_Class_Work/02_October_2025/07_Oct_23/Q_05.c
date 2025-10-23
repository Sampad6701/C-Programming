/*
WACP to check whether the number is prime or not.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Enter a number: 7
// 7 is a prime number.