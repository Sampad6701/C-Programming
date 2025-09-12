#include <stdio.h>

int main() {
    int num, c = 1;
    printf("Enter a number to check for prime: ");
    scanf("%d", &num);

    if(num < 2) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            c = 0;
            break;
        }
    }

    if(c)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}
