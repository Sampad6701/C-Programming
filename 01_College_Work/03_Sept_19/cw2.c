    #include <stdio.h>
    int main () {
        char name[20];
        double basic, daper, bonper, loandet;

        printf("Enter employee name: ");
        scanf("%19s", name);

        printf("Enter basic salary: ");
        scanf("%lf", &basic);

        printf("Enter DA percentage: ");
        scanf("%lf", &daper);

        printf("Enter Bonus percentage: ");
        scanf("%lf", &bonper);

        printf("Enter loan deduction: ");
        scanf("%lf", &loandet);

        double salary = basic + (basic * daper / 100) + (basic * bonper / 100) - loandet;

        printf("\n--- SALARY DETAILS ---\n");
        printf("Employee Name: %s\n", name);
        printf("Salary: %lf\n", salary);

        return 0;
    }

// --- OUTPUT ---

// Enter employee name: Mark
// Enter basic salary: 2500
// Enter DA percentage: 55
// Enter Bonus percentage: 33.33
// Enter loan deduction: 250.00

// --- SALARY DETAILS ---
// Employee Name: Mark
// Salary: 4458.250000
