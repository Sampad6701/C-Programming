#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int square[ARRAY_SIZE], sum = 0;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        square[i] = i * i;
        printf("Square[%d] has address %X and value %d\n", i, &square[i], square[i]);
        sum += square[i];
    }
    printf("Sum of squares: %d\n", sum);
    return 0;
}