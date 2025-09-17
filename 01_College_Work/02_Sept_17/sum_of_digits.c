#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Please enter a non-negative integer.");
        return 0;
    }
    else if(num < 10) {
        printf("Sum of digits of %d = %d", num, num);
        return 0;
    }
    else {
        int sum = 0, temp = num;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("Sum of digits of %d = %d", num, sum);
    }
    return 0;
}
