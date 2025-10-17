// Grading

#include <stdio.h>
int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float total, percentage;
    char grade;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100;

    
    if(percentage > 100 || percentage < 0) {
        printf("Invalid Percentage!\n");
        return 0;
    }
    
    else {
        printf("Total Marks: %.2f\nPercentage: %.2f%%\n", total, percentage);

        if(percentage >= 90) {
            grade = 'A';
        }
        else if(percentage >= 80) {
            grade = 'B';
        }
        else if(percentage >= 70) {
            grade = 'C';
        }
        else if(percentage >= 60) {
            grade = 'D';
        }
        else if(percentage >= 40) {
            grade = 'E';
        }
        else {
            grade = 'F';
        }
    }
    
    printf("Grade: %c\n", grade);
    return 0;
}