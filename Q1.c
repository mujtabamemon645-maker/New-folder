#include <stdio.h>

int main() {
    float programming, math, ai, attendance;
    float average;

    // Input marks and attendance
    printf("Enter Programming marks: ");
    scanf("%f", &programming);

    printf("Enter Mathematics marks: ");
    scanf("%f", &math);

    printf("Enter AI marks: ");
    scanf("%f", &ai);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    // Check eligibility conditions
    if (programming >= 50 && math >= 50 && ai >= 50 && attendance >= 75) {
        // Calculate average
        average = (programming + math + ai) / 3.0;

        printf("\nStudent is Eligible.\n");
        printf("Average Marks: %.2f\n", average);

        // Performance classification using switch-case
        // Divide average by 10 to map scores to discrete integer cases
        switch ((int)average / 10) {
            case 10:
            case 9:
            case 8:
                printf("Performance: Excellent\n");
                break;
            case 7:
                printf("Performance: Very Good\n");
                break;
            case 6:
                printf("Performance: Good\n");
                break;
            case 5:
                printf("Performance: Satisfactory\n");
                break;
            default:
                printf("Performance: Poor\n");
                break;
        }
    } else {
        printf("\nStudent is Not Eligible\n");
    }

    return 0;
}