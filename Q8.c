#include <stdio.h>

int main() {
    int permission;

    // Define permission bitmasks as per problem statement
    // View = 1 (0001 in binary)
    // Train = 2 (0010 in binary)
    // Test = 4 (0100 in binary)
    // Deploy = 8 (1000 in binary)
    
    // Input user's combined permission bitmask
    printf("Enter user's permission bitmask value: ");
    scanf("%d", &permission);

    printf("\n--- Permission Breakdown ---\n");

    // Check individual permissions using bitwise AND (&)
    if (permission & 1) {
        printf("- View Permission: GRANTED\n");
    } else {
        printf("- View Permission: DENIED\n");
    }

    if (permission & 2) {
        printf("- Train Permission: GRANTED\n");
    } else {
        printf("- Train Permission: DENIED\n");
    }

    if (permission & 4) {
        printf("- Test Permission: GRANTED\n");
    } else {
        printf("- Test Permission: DENIED\n");
    }

    if (permission & 8) {
        printf("- Deploy Permission: GRANTED\n");
    } else {
        printf("- Deploy Permission: DENIED\n");
    }

    printf("\n--- Composite Evaluation ---\n");

    // Rule 3: Check if the user has BOTH Training and Deployment permissions
    // Using (permission & 2) && (permission & 8)
    if ((permission & 2) && (permission & 8)) {
        printf("Training + Deployment Status: AUTHORIZED\n");
    } else {
        printf("Training + Deployment Status: NOT AUTHORIZED (Requires both Train and Deploy permissions)\n");
    }

    return 0;
}