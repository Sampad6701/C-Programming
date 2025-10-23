// Function returning a value
/*
WAPC that finds the square of a number using a user-defined function
*/

#include <stdio.h>
int square(int n);
int main() {
    int num;
    printf("Enter an inetger : ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}
int square(int n) {
    return n * n;
}