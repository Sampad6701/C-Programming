#include <stdio.h>
int main() {
    int n;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    int arr[n];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
