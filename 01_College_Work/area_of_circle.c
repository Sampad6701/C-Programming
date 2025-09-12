#include <stdio.h>
#define PI 3.14159

void main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    printf("The area of the circle with radius %lf is %lf", radius, area);
}