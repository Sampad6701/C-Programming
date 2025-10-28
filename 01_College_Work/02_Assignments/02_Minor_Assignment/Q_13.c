#include <stdio.h>
int main() {
    int n= 7;
    // int dec = 1;
    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j < 'A' + n - i; j++) {
            printf("%c ", j);
        }

        for (int spaces = 0; spaces < 2 * i - 1; spaces++) {
            printf("  ");
        }

        // --- This was inital approach which I optimised later ---
        // char k;
        // if(i <= 1) {
        //     k = 'F'; 
        // }

        // else {
        //     k = 'F' - dec; 
        //     dec++; 
        // }

        // for (; k >= 'A';k--) {
        //     printf("%c ", k);
        // }
        // printf("\n");

        // --- Optimised Loop ---
        for (char k = 'F' - ((i <= 1) ? 0 : i - 1); k >= 'A'; k--) {
            printf("%c ", k);
        }
        printf("\n");
       
    }
    return 0;
}