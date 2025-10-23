// Find common elements in Two Arrays
#include <stdio.h>
int main() {
    int A[] = {1, 2, 3, 4}, B[] = {3, 4, 5, 6};
    int n1 = 4, n2 = 4;
    
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            if(A[i] == B[j])
                printf("Common Element: %d\n", A[i]);
    return 0;
}

// --- OUTPUT ---
// Common Element: 3
// Common Element: 4