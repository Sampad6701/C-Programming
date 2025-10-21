// Write a program to search for an element in an array using linear search algorithm.
#include <stdio.h>
int main() {
    int n, target, found = 0;
    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &target);   
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("Element %d found at index %d.\n", target, i);
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}