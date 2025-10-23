// Initialize Single and Multi Dimensional Arrays
#include <stdio.h>
int main() {
    int single1[5] = {10, 20, 30, 40, 50};
    int single2[5] = {1, 2, 3};
    int single3[] = {5, 10, 15, 20};
    
    printf("Single Dimensional Array 1: ");
    for (int i = 0; i < 5; i++) printf("%d ", single1[i]);
    
    printf("\nSingle Dimensional Array 2: ");
    for (int i = 0; i < 5; i++) printf("%d ", single2[i]);
    
    printf("\nSingle Dimensional Array 3: ");
    for (int i = 0; i < 4; i++) printf("%d ", single3[i]);
    
    int multi1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int multi2[2][2] = {10, 20, 30, 40};
    
    printf("\n\nTwo Dimensional Array 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", multi1[i][j]);
        printf("\n");
    }
    
    printf("\nTwo Dimensional Array 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", multi2[i][j]);
        printf("\n");
    }
    return 0;
}
