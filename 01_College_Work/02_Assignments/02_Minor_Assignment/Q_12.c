#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0.0;
    double term;
    int n;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    if (x <= 0) {
        printf("Error: x must be positive for natural logarithm\n");
        return 1;
    }
    
    for (n = 1; n <= 9; n++) {
        term = (1.0 / n) * pow((x - 1) / x, n);
        sum += term;
    }
    
    printf("\nSum of first 9 terms: %.10lf\n", sum);
    return 0;
}