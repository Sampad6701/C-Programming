// Input and Output of Float and Double using user input

#include <stdio.h>
int main() {
    float num1;
    double num2;

    printf("Enter a float value: ");
    scanf("%f", &num1);

    printf("Enter a double value: ");
    scanf("%lf", &num2);

    printf("The value of num1 is: %f\n", num1);
    printf("The value of num2 is: %lf\n", num2);
    return 0;
}