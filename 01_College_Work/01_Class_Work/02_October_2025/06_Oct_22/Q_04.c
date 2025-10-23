// Find the difference between Two Arrays (A - B)

#include <stdio.h>
int main() {
    int A[] = {1, 2, 3, 4}, B[] = {3, 4, 5, 6};
    int n1 = 4, n2 = 4, found;
    
    for (int i = 0; i < n1; i++) {
        found = 0;
        for (int j = 0; j < n2; j++)
            if(A[i] == B[j])
                found = 1;
        if (!found)
            printf("Element in A not in B: %d\n", A[i]);
    }            
    return 0;
}

// --- OUTPUT ---
// Element in A not in B: 1
// Element in A not in B: 2
