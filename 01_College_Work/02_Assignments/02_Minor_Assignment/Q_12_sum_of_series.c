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
    double first_term = (x - 1) / x;
    sum += first_term;
    for (n = 1; n <= 9; n++) {
        double current_term = (1.0 / 2.0) * pow((x - 1) / x, n);
        sum += current_term;
    }
    
    printf("\nSum of first 9 terms: %lf\n", sum);
    return 0;
}
