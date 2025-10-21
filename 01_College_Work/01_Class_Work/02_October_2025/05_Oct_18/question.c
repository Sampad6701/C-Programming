// Enter an element at the first and last position of an array
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of elements you want to store: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    int arr[n];

    printf("Enter the first element: ");
    scanf("%d", &arr[0]);

    if (n > 1) {
        printf("Enter the last element: ");
        scanf("%d", &arr[n - 1]);
    } else {
        printf("Only one element, so it is both first and last.\n");
    }

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
