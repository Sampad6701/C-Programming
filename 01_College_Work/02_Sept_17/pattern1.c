#include<stdio.h>
void main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// --- OUTPUT ---
// Enter value of n: 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
