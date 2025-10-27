#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);
void prime_upto_n(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    prime_upto_n(n);
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

void prime_upto_n(int n) {
    printf("Primes upto %d -\n", n);
    for(int i = 2; i <= n; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }
}
