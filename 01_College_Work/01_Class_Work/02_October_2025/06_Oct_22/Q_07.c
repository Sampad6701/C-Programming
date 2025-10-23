// Merge two sorted arrays

#include <stdio.h>
int main() {
    int A[] = {1, 3, 5}, B[] = {2, 4, 6};
    int n1 = 3, n2 = 3, merged[10];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (A[i] < B[j])
            merged[k++] = A[i++];
        else
            merged[k++] = B[j++];
    }
    while (i < n1) merged[k++] = A[i++];
    while (j < n2) merged[k++] = B[j++];
    printf("Merged sorted array: ");
    for (int m = 0; m < k; m++)
        printf("%d ", merged[m]);
    return 0;
}
