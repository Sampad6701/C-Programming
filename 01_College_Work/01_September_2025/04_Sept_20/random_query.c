#include <stdio.h>
int main() {
    int x, zero_count = 0, minus_sum = 0, plus_sum = 0;
    printf("Enter value of x : ");
    scanf("%d", &x);

    if(x > 0) {
        plus_sum += x;
        printf("Plus sum: %d\n", plus_sum);
    } else if(x < 0) {
        minus_sum += x;
        printf("Minus sum: %d\n", minus_sum);
    } else {
        zero_count++;
        printf("Zero count: %d\n", zero_count);
    }
    
    return 0;
}