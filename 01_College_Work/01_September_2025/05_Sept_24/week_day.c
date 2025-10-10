#include <stdio.h>

int main() {
    int week_no;
    printf("Enter week number: ");
    scanf("%d", &week_no);

    if (week_no < 1 || week_no > 7) {
        printf("Invalid Week Number, Enter again!\n");
    }
    else if (week_no == 1) {
        printf("Day : Monday\n");
    }
    else if (week_no == 2) {
        printf("Day : Tuesday\n");
    }
    else if (week_no == 3) {
        printf("Day : Wednesday\n");
    }
    else if (week_no == 4) {
        printf("Day : Thursday\n");
    }
    else if (week_no == 5) {
        printf("Day : Friday\n");
    }
    else if (week_no == 6) {
        printf("Day : Saturday\n");
    }
    else {
        printf("Day : Sunday\n");
    }

    return 0;
}
