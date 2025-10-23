#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7, count;
    printf("Unique elements: ");
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j]) count++;
        if (count == 1)
            printf("%d ", arr[i]);
    }
    return 0;
}
