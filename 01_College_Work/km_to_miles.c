#include<stdio.h>
#define MILES_IN_KMS 1.60934 // defines a constant value

void main() {
    float miles, kms;
    printf("Enter distance in miles:");
    scanf("%f", &miles);

    kms = miles * MILES_IN_KMS;
    printf("%f miles is equals to %f kilometers\n", miles, kms);
}