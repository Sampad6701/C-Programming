// Enter month number and print number of days in that month

#include <stdio.h>
int main() {
    int month_no;
    printf("Enter month number: ");
    scanf("%d", &month_no);

    if (month_no < 1 || month_no > 12) {
        printf("Invalid Month Number, Enter again!\n");
    }
    else if (month_no == 1) {
        printf("Month : January,\nDays : 31\n");
    }
    else if (month_no == 2) {
        printf("Month : February,\nDays : 28 (29 in leap years)\n");
    }
    else if (month_no == 3) {
        printf("Month : March,\nDays : 31\n");
    }
    else if (month_no == 4) {
        printf("Month : April,\nDays : 30\n");
    }
    else if (month_no == 5) {
        printf("Month : May,\nDays : 31\n");
    }
    else if (month_no == 6) {
        printf("Month : June,\nDays : 30\n");
    }
    else if (month_no == 7) {
        printf("Month : July,\nDays : 31\n");
    }
    else if (month_no == 8) {
        printf("Month : August,\nDays : 31\n");
    }
    else if (month_no == 9) {
        printf("Month : September,\nDays : 30\n");
    }
    else if (month_no == 10) {
        printf("Month : October,\nDays : 31\n");
    }
    else if (month_no == 11) {
        printf("Month : November,\nDays : 30\n");
    }
    else {
        printf("Month : December,\nDays : 31\n");
    }

    return 0;
}
