#include <stdio.h>
int main() {
    float speed, distance, acceleration, time;
    
    printf("Enter takeoff speed (km/hr): ");
    scanf("%f", &speed);
    
    printf("Enter distance (meters): ");
    scanf("%f", &distance);
    
    speed = speed * (5.0 / 18.0);
    
    acceleration = (speed * speed) / (2 * distance);
    time = speed / acceleration;
    
    printf("\nResults:\n");
    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to reach takeoff speed: %.2f seconds\n", time);
    
    return 0;
}

// Enter takeoff speed (km/hr): 278
// Enter distance (meters): 94

// Results:
// Acceleration: 31.72 m/s^2
// Time to reach takeoff speed: 2.43 seconds
