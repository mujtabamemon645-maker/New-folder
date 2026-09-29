#include <stdio.h>

int main() {
    float confidence, required_threshold;

    // Input model confidence score and required threshold
    printf("Enter AI Model Confidence Score (%%): ");
    scanf("%f", &confidence);

    printf("Enter Required Confidence Threshold (%%): ");
    scanf("%f", &required_threshold);

    // Classify Confidence Level
    printf("\n--- Decision Analysis ---\n");
    if (confidence >= 90.0) {
        printf("Confidence Level: Very High\n");
    } 
    else if (confidence >= 75.0) {
        printf("Confidence Level: High\n");
    } 
    else if (confidence >= 50.0) {
        printf("Confidence Level: Moderate\n");
    } 
    else {
        printf("Confidence Level: Low\n");
    }

    // Determine Prediction Acceptance based on Rule 5
    // Accepted if: Confidence >= Required Threshold AND Confidence >= 50%
    if (confidence >= required_threshold && confidence >= 50.0) {
        printf("Prediction Status: ACCEPTED\n");
    } else {
        printf("Prediction Status: REJECTED\n");
    }

    return 0;
}