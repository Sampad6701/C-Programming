#include <stdio.h>
int main() {
    int product = 1, n;
    while(1) {
        printf("Enter a number to do multiply : ");
        scanf("%d", &n);
        
        product *= n;
        if(product >= 10000) {
            printf("Product exceeded 9999, stopping the process.\n");
            break;
        }
        printf("Current Product: %d\n", product);
    }
    return 0;
}

// --- OUTPUT ---
// Enter a number to do multiply : 5
// Current Product: 5
// Enter a number to do multiply : 100
// Current Product: 500
// Enter a number to do multiply : 10
// Current Product: 5000
// Enter a number to do multiply : 2
// Product exceeded 9999, stopping the process.