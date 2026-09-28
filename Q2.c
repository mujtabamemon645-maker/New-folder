#include <stdio.h>

int main() {
    int age, credit_score;
    float monthly_income;
    char existing_loan[10];

    // Input details
    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Monthly Income: ");
    scanf("%f", &monthly_income);

    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);

    printf("Is there an Existing Loan? (Yes/No or Y/N): ");
    scanf("%s", existing_loan);

    // Convert existing loan response to 'y' or 'n'
    char has_loan = (existing_loan[0] == 'Y' || existing_loan[0] == 'y') ? 'y' : 'n';

    // Decision Structure based on approval rules
    if (age >= 21 && monthly_income >= 100000 && credit_score >= 750 && has_loan == 'n') {
        printf("\nResult: High Approval Chance\n");
    } 
    else if (age >= 21 && monthly_income >= 75000 && credit_score >= 650 && has_loan == 'y') {
        printf("\nResult: Manual Review\n");
    } 
    else if (age >= 21 && monthly_income >= 50000 && credit_score >= 600) {
        printf("\nResult: Possibly Eligible\n");
    } 
    else {
        printf("\nResult: Rejected\n");
    }

    return 0;
}