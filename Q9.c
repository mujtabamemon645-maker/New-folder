#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exponent, result;

    // Display Calculator Menu
    printf("=== AI Math Operations Calculator ===\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
    printf("Select an operation (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Square Root: Input >= 0 required
            printf("Enter a number (>= 0): ");
            scanf("%lf", &num);

            if (num < 0) {
                printf("Error: Invalid input! Negative number for square root is not allowed.\n");
            } else {
                result = sqrt(num);
                printf("Result: sqrt(%.2f) = %.4f\n", num, result);
            }
            break;

        case 2:
            // Power: Base and exponent
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);

            result = pow(base, exponent);
            printf("Result: pow(%.2f, %.2f) = %.4f\n", base, exponent, result);
            break;

        case 3:
            // Absolute Value: Any number
            printf("Enter any number: ");
            scanf("%lf", &num);

            result = fabs(num);
            printf("Result: fabs(%.2f) = %.4f\n", num, result);
            break;

        case 4:
            // Floor: Any number
            printf("Enter any number: ");
            scanf("%lf", &num);

            result = floor(num);
            printf("Result: floor(%.2f) = %.4f\n", num, result);
            break;

        case 5:
            // Ceiling: Any number
            printf("Enter any number: ");
            scanf("%lf", &num);

            result = ceil(num);
            printf("Result: ceil(%.2f) = %.4f\n", num, result);
            break;

        default:
            printf("Error: Invalid menu choice!\n");
            break;
    }

    return 0;
}