#include<stdio.h>
void main() {
    int a, b, sum = 0;

    printf("Enter value of a: "); 
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Result of %d + %d = %d", a, b, sum);
}
