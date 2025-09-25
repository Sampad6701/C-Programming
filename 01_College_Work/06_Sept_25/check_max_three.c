#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the maximum number.\n", num1);
        } 
        else if (num3 > num1) {
            printf("%d is the maximum number.\n", num3);
        } 
        else {
            printf("There is a tie between %d and %d.\n", num1, num3);
        }
    } 

    else if (num2 > num1) {
        if (num2 > num3) {
            printf("%d is the maximum number.\n", num2);
        } 
        else if (num3 > num2) {
            printf("%d is the maximum number.\n", num3);
        } 
        else {
            printf("There is a tie between %d and %d.\n", num2, num3);
        }
    } 
    
    else {
        if (num3 > num1) {
            printf("%d is the maximum number.\n", num3);
        } 
        else if (num3 < num1) {
            printf("There is a tie between %d and %d.\n", num1, num2);
        } 
        else {
            printf("All three numbers are equal.\n");
        }
    }

    return 0;
}
