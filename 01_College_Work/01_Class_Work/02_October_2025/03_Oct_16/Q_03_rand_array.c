#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5
#define RAND_MAX_VALUE 100

int main() {
    srand(time(NULL));  // Seed the random number generator

    int arr[ARRAY_SIZE], sum = 0;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % RAND_MAX_VALUE;
        sum += arr[i];
        printf("arr[%d] has value %d\n", i, arr[i]);
    }

    printf("Sum of random integers: %d\n", sum);

    return 0;
}
