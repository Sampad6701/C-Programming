#include <stdio.h>
int main()
{
    int i = 0;
    while (i++)
    {
        printf("%d ", i);
        if (i > 2)
            break;
    }
    return (0);
}

// --- OUTPUT ---
//

/*
initial value of i = 0, i++ is a post decrement operation, so value of i at while
is 0, in C zero value means false and non-zero as true, so here the loop never gets executed.
*/
