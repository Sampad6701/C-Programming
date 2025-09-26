// Calculate BMI Index
#include <stdio.h>
int main() {
    double weight, height;
    printf("Enter weight (in kgs) : ");
    scanf("%lf", &weight);
    
    printf("Enter height (in meters) : ");
    scanf("%lf", &height);
    
    double bmi = (weight / (height * height));
    printf("BMI = %lf\n", bmi);
    return 0;
}

// --- OUTPUT ---
// Enter weight (in kgs) : 63
// Enter height (in meters) : 1.69
// BMI = 22.058051
