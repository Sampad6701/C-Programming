#include <stdio.h>
int main() {
    char desired_grade;
    float min_average, current_average, final_percentage, final_score;
    
    printf("Enter desired grade> ");
    scanf(" %c", &desired_grade);
    
    printf("Enter minimum average required> ");
    scanf("%f", &min_average);
    
    printf("Enter current average in course> ");
    scanf("%f", &current_average);
    
    printf("Enter how much the final counts\nas a percentage of the course grade> ");
    scanf("%f", &final_percentage);
    
    final_score = (min_average - current_average * (100 - final_percentage) / 100) / (final_percentage / 100);
    
    printf("You need a score of %.2f on the final to get a %c.\n", final_score, desired_grade);
    
    return 0;
}

// Example Output:
// Enter desired grade> B
// Enter minimum average required> 79.5
// Enter current average in course> 74.6
// Enter how much the final counts
// as a percentage of the course grade> 25
// You need a score of 94.20 on the final to get a B.
