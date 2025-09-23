#include <stdio.h>
int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num != 0) {
        product *= num;
        printf("Product: %d\n", product);
    } else {
        printf("Product: 0\n");
    }
    return 0;
}