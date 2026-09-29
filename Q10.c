#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence;
    int dataset_size, user_role, model_status, permissions;
    float model_score;

    // Input section
    printf("=== AI Decision Engine System ===\n");
    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);

    printf("Enter Model Confidence Score (%%): ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size (number of samples): ");
    scanf("%d", &dataset_size);

    printf("Select User Role (1 = Admin, 2 = Developer, 3 = Researcher): ");
    scanf("%d", &user_role);

    printf("Select Model Status (1 = Ready, 2 = Testing, 3 = Training): ");
    scanf("%d", &model_status);

    printf("Enter User Permission Bitmask (View=1, Train=2, Test=4, Deploy=8): ");
    scanf("%d", &permissions);

    // Calculate Model Score using math library
    model_score = (accuracy + confidence) / 2.0;

    printf("\n================ SYSTEM SUMMARY ================\n");
    
    // Display memory size of data types using sizeof()
    printf("[System Info] Memory size of Model Score: %lu bytes\n", sizeof(model_score));

    // Nested Switch-Case for Role and Model Status Display
    printf("User Role: ");
    switch (user_role) {
        case 1:
            printf("Admin\n");
            break;
        case 2:
            printf("Developer\n");
            break;
        case 3:
            printf("Researcher\n");
            break;
        default:
            printf("Unknown Role\n");
            break;
    }

    printf("Model Status: ");
    switch (model_status) {
        case 1:
            printf("Ready\n");
            break;
        case 2:
            printf("Testing\n");
            break;
        case 3:
            printf("Training\n");
            break;
        default:
            printf("Invalid Status\n");
            break;
    }

    // Check Deployment Permission using Bitwise AND (&)
    int has_deploy_permission = (permissions & 8) ? 1 : 0;
    printf("Deploy Permission: %s\n", has_deploy_permission ? "GRANTED" : "DENIED");

    printf("Calculated Model Score: %.2f%%\n", model_score);

    // Deployment Readiness Evaluation using Nested IF-ELSE & Logical Operators
    // Rule 1: Accuracy >= 80% AND Confidence >= 75% AND Dataset Size >= 1000 AND Model Status = 1 (Ready) AND User Has Deploy Permission (permissions & 8)
    if (accuracy >= 80.0 && confidence >= 75.0 && dataset_size >= 1000) {
        if (model_status == 1) {
            if (has_deploy_permission) {
                printf("\n>>> DEPLOYMENT STATUS: DEPLOYMENT READY <<<\n");
            } else {
                printf("\n>>> DEPLOYMENT STATUS: NOT READY (User lacks Deployment Permission) <<<\n");
            }
        } else {
            printf("\n>>> DEPLOYMENT STATUS: NOT READY (Model Status must be 'Ready') <<<\n");
        }
    } else {
        printf("\n>>> DEPLOYMENT STATUS: NOT READY (Does not meet Accuracy/Confidence/Dataset thresholds) <<<\n");
    }

    return 0;
}