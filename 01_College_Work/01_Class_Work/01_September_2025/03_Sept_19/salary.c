    #include <stdio.h>
    int main () {
        char name[50];
        double basic, daper, bonper, loandet;

        printf("Enter employee name: ");
        scanf("%49s", name);

        printf("Enter basic salary: ");
        scanf("%lf", &basic);

        printf("Enter daper percentage: ");
        scanf("%lf", &daper);

        printf("Enter bonper percentage: ");
        scanf("%lf", &bonper);

        printf("Enter loan deduction: ");
        scanf("%lf", &loandet);

        double salary = basic + (basic * daper / 100) + (basic * bonper / 100) - loandet;

        printf("\n--- SALARY DETAILS ---\n");
        printf("Employee Name: %s\n", name);
        printf("Salary: %lf\n", salary);

        return 0;
    }