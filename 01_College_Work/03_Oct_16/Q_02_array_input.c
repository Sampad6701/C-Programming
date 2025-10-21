// Accept array data from standard input
#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int arr[ARRAY_SIZE], sum = 0;
    printf("Enter %d integers separated by blanks on <return>s\n>", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of entered integers: %d\n", sum);
    return 0;
}