#include <stdio.h>
#define PI 3.14

float area_of_circle(float radius);
int main() {
    float r, result;
    printf("Enter radius to calculate the are if the circle : ");
    scanf("%f", &r);
    result = area_of_circle(r);
    printf("Area of circle with radius %f is %.2f", r, result);
    return 0;
}

float area_of_circle(float radius) {
    return PI * radius * radius;
}
