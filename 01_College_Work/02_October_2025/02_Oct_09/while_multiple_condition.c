#include <stdio.h>
int main() {
    int i = 0, j = 10;
    while(i < j && j > 5) {
        printf("i = %d, j = %d\n", i, j);
        i++; j--;
    }
    return 0;
}