#include <stdio.h>
int
main(void) {
    char first, middle, last; // input 3 initials
    int pennies, nickels, dimes, quarters, dollars; // input coin counts of each type
    int change; // output total change in cents
    int total_dollars, total_cents; // output total change in dollars and cents

    printf("Enter your initials (first, middle, last): ");
    scanf(" %c %c %c", &first, &middle, &last);

    printf("Enter number of pennies: ");
    scanf("%d", &pennies);
    printf("Enter number of nickels: ");
    scanf("%d", &nickels);
    printf("Enter number of dimes: ");
    scanf("%d", &dimes);
    printf("Enter number of quarters: ");
    scanf("%d", &quarters);
    printf("Enter number of dollars: ");
    scanf("%d", &dollars);

    // compute total value in cents
    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

    // Find the value in dollars and change
    total_dollars = total_cents / 100;
    change = total_cents % 100;
    printf("\n\n%c.%c.%c Coin Credit\nDollars: %d\nChange: %d cent", first, middle, last, total_dollars, change);
    return 0;
}