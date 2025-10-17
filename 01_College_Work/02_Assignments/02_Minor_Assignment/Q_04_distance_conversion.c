#include <stdio.h>
int main() {
    float meters, kilometers, centimeters, millimeters, feet, inches;
    
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    
    kilometers = meters * 0.001;
    centimeters = meters * 100;
    millimeters = meters * 1000;
    feet = meters * 3.28084;
    inches = meters * 39.3701;
    
    printf("+------------------+------------------+\n");
    printf("| %-16s | %-16s |\n", "Unit", "Value");
    printf("+------------------+------------------+\n");
    printf("| %-16s | %-16.2f |\n", "Meters", meters);
    printf("| %-16s | %-16.2f |\n", "Kilometers", kilometers);
    printf("| %-16s | %-16.2f |\n", "Centimeters", centimeters);
    printf("| %-16s | %-16.2f |\n", "Millimeters", millimeters);
    printf("| %-16s | %-16.2f |\n", "Feet", feet);
    printf("| %-16s | %-16.2f |\n", "Inches", inches);
    printf("+------------------+------------------+\n");
    
    return 0;
}
