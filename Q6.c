#include <stdio.h>

int main() {
    int problemType, algorithmChoice;

    // Display Main Problem Type Menu
    printf("=== Machine Learning Model Selection ===\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Select Problem Type (1-4): ");
    scanf("%d", &problemType);

    // Outer switch for Problem Type
    switch (problemType) {
        case 1:
            // Submenu for Classification
            printf("\n--- Classification Algorithms ---\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            printf("Select Algorithm (1-3): ");
            scanf("%d", &algorithmChoice);

            // Inner switch for Classification
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Technique: Logistic Regression\n");
                    break;
                case 2:
                    printf("\nSelected Technique: Decision Tree\n");
                    break;
                case 3:
                    printf("\nSelected Technique: KNN\n");
                    break;
                default:
                    printf("\nInvalid Algorithm Selection!\n");
                    break;
            }
            break;

        case 2:
            // Submenu for Regression
            printf("\n--- Regression Algorithms ---\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            printf("Select Algorithm (1-3): ");
            scanf("%d", &algorithmChoice);

            // Inner switch for Regression
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Technique: Linear Regression\n");
                    break;
                case 2:
                    printf("\nSelected Technique: Polynomial Regression\n");
                    break;
                case 3:
                    printf("\nSelected Technique: SVR\n");
                    break;
                default:
                    printf("\nInvalid Algorithm Selection!\n");
                    break;
            }
            break;

        case 3:
            // Submenu for Clustering
            printf("\n--- Clustering Algorithms ---\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Select Algorithm (1-3): ");
            scanf("%d", &algorithmChoice);

            // Inner switch for Clustering
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Technique: K-Means\n");
                    break;
                case 2:
                    printf("\nSelected Technique: Hierarchical Clustering\n");
                    break;
                case 3:
                    printf("\nSelected Technique: DBSCAN\n");
                    break;
                default:
                    printf("\nInvalid Algorithm Selection!\n");
                    break;
            }
            break;

        case 4:
            // Submenu for Computer Vision
            printf("\n--- Computer Vision Algorithms ---\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            printf("Select Algorithm (1-3): ");
            scanf("%d", &algorithmChoice);

            // Inner switch for Computer Vision
            switch (algorithmChoice) {
                case 1:
                    printf("\nSelected Technique: CNN\n");
                    break;
                case 2:
                    printf("\nSelected Technique: YOLO\n");
                    break;
                case 3:
                    printf("\nSelected Technique: R-CNN\n");
                    break;
                default:
                    printf("\nInvalid Algorithm Selection!\n");
                    break;
            }
            break;

        default:
            printf("\nInvalid Problem Type Selected!\n");
            break;
    }

    return 0;
}