#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            if (marks >= 95)
                grade = 'O';
            else
                grade = 'A';
            break;
        case 8:
            grade = 'A';
            break;
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade = %c\n", grade);

    return 0;
}
