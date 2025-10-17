// Use scanf() statement and do the following:
// - i/p the value of the integer variable sum
// - i/p the value of the float variable discount
// - i/p the value of float varaible var1, var2
// - o/p the value of the float variable var1, var2 using 2 decimal places

#include <stdio.h>
int main() {
    int sum; char chr;
    float discount, var1, var2;

    printf("Enter an integer value for sum: ");
    scanf("%d", &sum);

    printf("Enter a character: ");
    scanf(" %c", &chr); 

    printf("Enter a float value for discount: ");
    scanf("%f", &discount);

    printf("Enter two float values: ");
    scanf("%f %f", &var1, &var2);

    printf("\n--- OUTPUT ---\n");
    printf("Integer sum: %d\n", sum);
    printf("Character: %c\n", chr);
    printf("Float discount: %f\n", discount);
    printf("Float var1: %.2f\n", var1);
    printf("Float var2: %.2f\n", var2);

    return 0;
}
