#include <stdio.h>
int main()
{
    int i = 2;
    switch (i)
    {
    default:
        printf("Hello ");
    case 1:
        printf("Hello ");
    case 2:
    case 3:
        printf("Hello ");
    }
    return (0);
}

// --- OUTPUT ---
// Hello

/*
Explanation:
-> i = 2
-> case 2 gets executed and since there is no break statement, it falls through to case 3.
*/
