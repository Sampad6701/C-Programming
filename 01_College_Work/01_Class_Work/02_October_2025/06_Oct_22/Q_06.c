// Check whether a matrix is sparse or not

#include <stdio.h>
int main() {
    int matrix[3][3] = {{0, 0, 3}, {0, 0, 0}, {4, 0, 0}};
    int rows = 3, cols = 3, zeroCount = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] == 0) zeroCount++;
    int total = rows * cols;
    if (zeroCount > total / 2)
        printf("The matrix is sparse.");
    else
        printf("The matrix is not sparse.");
    return 0;
}
