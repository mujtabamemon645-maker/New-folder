#include <stdio.h>
#include <string.h>

int main() {
    float confidence;
    char user_type[20];
    int is_authorized = 0;

    // Input recognition confidence and user type
    printf("Enter AI Face Recognition Confidence Score (%%): ");
    scanf("%f", &confidence);

    printf("Enter User Type (Authorized / Unauthorized): ");
    scanf("%s", user_type);

    // Flag for user authorization status
    if (strcasecmp(user_type, "Authorized") == 0) {
        is_authorized = 1;
    }

    // Access control decision logic
    printf("\n--- System Decision ---\n");

    if (confidence < 50.0 || !is_authorized) {
        // Rule 4: Access Denied if confidence < 50% OR User Type = Unauthorized
        printf("Access Status: Access Denied\n");
    } 
    else if (confidence >= 80.0 && is_authorized) {
        // Rule 1 & 3: Face Recognized and Access Granted
        printf("Face Recognized: Yes\n");
        printf("Access Status: Access Granted\n");
    } 
    else if (confidence >= 50.0 && confidence <= 79.0 && is_authorized) {
        // Rule 2: Manual Verification required for confidence 50-79%
        printf("Access Status: Manual Verification Required\n");
    }

    // Example of Ternary Operator to display access summary
    printf("Final Status: %s\n", (confidence >= 80.0 && is_authorized) ? "APPROVED" : "ACTION REQUIRED / DENIED");

    return 0;
}