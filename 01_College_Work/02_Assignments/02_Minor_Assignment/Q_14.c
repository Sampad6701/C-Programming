#include <stdio.h>

int main() {
    int n;
    printf("Enter the number > ");
    scanf("%d", &n);

    int num_columns = 10;
    int width = 3;

    int border_length = num_columns * (width + 1) + 1;

    for (int i = 0; i < border_length; i++) {
        printf(i == 0 || i == border_length - 1 ? "+" : "-");
    }
    printf("\n");

    printf("|");
    for (int i = 1; i <= num_columns; i++) {
        printf("%*d", width, n * i);
        if (i < num_columns) printf(" ");
    }
    printf("|\n");

    printf("|");
    for (int i = 1; i <= num_columns; i++) {
        printf("%*d", width, i);
        if (i < num_columns) printf(" ");
    }
    printf("|\n");

    printf("|");
    for (int i = 1; i <= num_columns; i++) {
        printf("%*d", width, n);
        if (i < num_columns) printf(" ");
    }
    printf("|\n");

    for (int i = 0; i < border_length; i++) {
        printf(i == 0 || i == border_length - 1 ? "+" : "-");
    }
    printf("\n");

    return 0;
}
