#include <stdio.h>
int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array are:\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int already_printed = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        already_printed = 1;
                        break;
                    }
                }
                if (!already_printed) {
                    printf("%d ", arr[i]);
                    found = 1;
                }
                break;
            }
        }
    }

    if (!found)
        printf("No duplicates found.");

    printf("\n");
    return 0;
}