#include<stdio.h>
int main(){
    float x = 25.0, y=10.0;
    if(y != (x - 10.0))
        x = x - 10.0;
    else
        x = x / 2.0;

    printf("Value of x: %f\n", x);
    return 0;
}

// --- OUTPUT ---
// Value of x: 15.000000
